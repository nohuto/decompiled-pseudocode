/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C0044FDC
 * Callers:
 *     xxxHkCallHook @ 0x1C009AFE0 (xxxHkCallHook.c)
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
 *     GetThreadDesktopWindow @ 0x1C00FF930 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(unsigned int a1, __int64 a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // r14d
  __int64 *ThreadDesktopWindow; // r15
  unsigned __int8 *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // edx
  unsigned int v15; // eax
  unsigned __int64 v16; // r8
  _OWORD *v17; // rax
  void **v18; // r9
  unsigned int v19; // r8d
  CHAR *v20; // rdx
  unsigned int v21; // r8d
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rdx
  ULONG64 v36; // rcx
  __int128 v37; // xmm4
  __int128 v38; // xmm5
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  int v42; // edx
  unsigned int v43; // eax
  CHAR *v44; // rdx
  void **v45; // r9
  struct _CAPTUREBUF *v46; // rcx
  unsigned int v47; // r8d
  int v48; // eax
  unsigned int v49; // r8d
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  CHAR *v52; // rax
  int v53; // r8d
  char v54; // [rsp+30h] [rbp-4E8h] BYREF
  _BYTE v55[3]; // [rsp+31h] [rbp-4E7h] BYREF
  unsigned int v56; // [rsp+34h] [rbp-4E4h]
  unsigned int v57; // [rsp+38h] [rbp-4E0h]
  unsigned __int8 *v58; // [rsp+40h] [rbp-4D8h]
  CHAR v59; // [rsp+48h] [rbp-4D0h]
  int v60; // [rsp+4Ch] [rbp-4CCh] BYREF
  int v61; // [rsp+50h] [rbp-4C8h] BYREF
  __int16 v62; // [rsp+54h] [rbp-4C4h]
  unsigned int v63; // [rsp+58h] [rbp-4C0h]
  unsigned __int64 v64; // [rsp+88h] [rbp-490h] BYREF
  unsigned int v65; // [rsp+90h] [rbp-488h]
  __int64 v66; // [rsp+A8h] [rbp-470h]
  __int64 v67; // [rsp+B0h] [rbp-468h]
  __int128 v68; // [rsp+B8h] [rbp-460h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp-450h] BYREF
  __int128 v70; // [rsp+D0h] [rbp-448h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-438h]
  __int128 v72; // [rsp+E8h] [rbp-430h]
  __int64 v73; // [rsp+F8h] [rbp-420h]
  __int128 v74; // [rsp+100h] [rbp-418h] BYREF
  __int64 v75; // [rsp+110h] [rbp-408h]
  __int64 v76; // [rsp+130h] [rbp-3E8h]
  _OWORD v77[8]; // [rsp+160h] [rbp-3B8h] BYREF
  __int128 v78; // [rsp+1E0h] [rbp-338h]
  __int64 v79; // [rsp+210h] [rbp-308h]
  _DWORD v80[44]; // [rsp+220h] [rbp-2F8h] BYREF
  unsigned __int8 v81[512]; // [rsp+2D0h] [rbp-248h] BYREF

  v67 = a4;
  v66 = a2;
  v63 = a1;
  v56 = 0;
  v57 = 0;
  v6 = 0;
  memset(v77, 0, 0x58uLL);
  ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
  memset(v80, 0, 0xA8uLL);
  v8 = (unsigned __int8 *)v80;
  v64 = 0LL;
  v61 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v68 = ThreadWin32Thread;
  if ( ThreadDesktopWindow )
    v10 = ThreadDesktopWindow[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v10 = 0LL;
  v11 = *a3;
  v12 = *(_QWORD *)(*a3 + 56);
  if ( v12 )
  {
    v42 = *(_DWORD *)(v11 + 84) >> 31;
    if ( v42 != a5 || v12 >= (unsigned __int64)MmSystemRangeStart )
    {
      v43 = *(_DWORD *)(v11 + 80);
      if ( v43 + 2 < v43 )
        goto LABEL_60;
      v56 = v43 + 2;
      if ( v42 && !a5 )
      {
        v50 = 2LL * (v43 + 2);
        if ( v50 > 0xFFFFFFFF )
          goto LABEL_60;
        v56 = v50;
      }
      v6 = 1;
    }
  }
  v13 = *(_QWORD *)(v11 + 64);
  if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v14 = *(_DWORD *)(v11 + 100) >> 31;
    if ( v14 != a5 || v13 >= (unsigned __int64)MmSystemRangeStart )
    {
      v15 = *(_DWORD *)(v11 + 96);
      if ( v15 + 2 < v15 )
        goto LABEL_60;
      v57 = v15 + 2;
      if ( v14 && !a5 )
      {
        v51 = 2LL * (v15 + 2);
        if ( v51 > 0xFFFFFFFF )
          goto LABEL_60;
        v57 = v51;
      }
      ++v6;
    }
  }
  v16 = v56 + v57;
  if ( (unsigned int)v16 < v56 )
    goto LABEL_60;
  v65 = v56 + v57;
  if ( v6 )
  {
    v8 = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v6, v16, v81, 1, 0x200uLL);
    v58 = v8;
    if ( !v8 )
      return 0LL;
  }
  else
  {
    v8 = (unsigned __int8 *)v80;
    v58 = (unsigned __int8 *)v80;
    memset(&v80[1], 0, 0xA4uLL);
    v80[0] = 168;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v74 = 0LL;
  v75 = 0LL;
  if ( v8 != (unsigned __int8 *)v80 && v8 != v81 )
    PushW32ThreadLock((__int64)v8, &v74, (__int64)Win32FreePool);
  *((_QWORD *)v8 + 5) = v10;
  *((_DWORD *)v8 + 12) = v63;
  *((_QWORD *)v8 + 7) = v66;
  *(_DWORD *)(*a3 + 52) = 0;
  *(_DWORD *)(*a3 + 76) = 0;
  v17 = (_OWORD *)*a3;
  *((_OWORD *)v8 + 4) = *(_OWORD *)*a3;
  *((_OWORD *)v8 + 5) = v17[1];
  *((_OWORD *)v8 + 6) = v17[2];
  *((_OWORD *)v8 + 7) = v17[3];
  *((_OWORD *)v8 + 8) = v17[4];
  if ( v56 )
  {
    if ( *(int *)(v11 + 84) < 0 )
    {
      v52 = *(CHAR **)(v11 + 56);
      v59 = *v52;
      if ( v59 == -1 )
      {
        if ( a5 )
        {
          v49 = 3;
          v44 = v52;
        }
        else
        {
          v60 = 0;
          v60 = ((unsigned __int16)(*(_DWORD *)v52 >> 8) << 16) | 0xFFFF;
          v49 = 4;
          v44 = (CHAR *)&v60;
        }
        v45 = (void **)(v8 + 120);
        v46 = (struct _CAPTUREBUF *)v8;
      }
      else
      {
        v45 = (void **)(v8 + 120);
        v53 = *(_DWORD *)(v11 + 80);
        v44 = *(CHAR **)(v11 + 88);
        v46 = (struct _CAPTUREBUF *)v8;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v8, v44, 2 * v53 + 2, v45) < 0 )
            goto LABEL_60;
          goto LABEL_17;
        }
        v49 = v53 + 1;
      }
    }
    else
    {
      v44 = *(CHAR **)(v11 + 56);
      v62 = *(_WORD *)v44;
      v45 = (void **)(v8 + 120);
      v46 = (struct _CAPTUREBUF *)v8;
      if ( v62 == -1 )
      {
        if ( a5 )
        {
          ++v44;
          v49 = 3;
        }
        else
        {
          v49 = 4;
        }
      }
      else
      {
        v47 = *(_DWORD *)(v11 + 80);
        v44 = *(CHAR **)(v11 + 88);
        if ( a5 )
        {
          v48 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v8, (PCWCH)v44, (v47 >> 1) + 1, v45);
          goto LABEL_59;
        }
        v49 = v47 + 2;
      }
    }
    v48 = CaptureCallbackData(v46, v44, v49, v45);
LABEL_59:
    if ( v48 < 0 )
      goto LABEL_60;
  }
LABEL_17:
  if ( v57 )
  {
    v18 = (void **)(v8 + 128);
    v19 = *(_DWORD *)(v11 + 96);
    v20 = *(CHAR **)(v11 + 104);
    if ( *(int *)(v11 + 100) < 0 )
    {
      if ( a5 )
      {
        v21 = v19 + 1;
        goto LABEL_21;
      }
      v22 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v8, v20, 2 * v19 + 2, v18);
    }
    else
    {
      if ( !a5 )
      {
        v21 = v19 + 2;
LABEL_21:
        v22 = CaptureCallbackData((struct _CAPTUREBUF *)v8, v20, v21, v18);
        goto LABEL_22;
      }
      v22 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v8, (PCWCH)v20, (v19 >> 1) + 1, v18);
    }
LABEL_22:
    if ( v22 < 0 )
      goto LABEL_60;
  }
  *((_QWORD *)v8 + 18) = a3[1];
  *((_QWORD *)v8 + 19) = v67;
  *((_DWORD *)v8 + 40) = a5;
  v23 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v70 = *(_QWORD *)(v23 + 408);
  *(_QWORD *)(v23 + 408) = &v70;
  *((_QWORD *)&v70 + 1) = ThreadDesktopWindow;
  if ( ThreadDesktopWindow )
    HMLockObject(ThreadDesktopWindow);
  v24 = v68;
  v25 = *(_QWORD *)(v68 + 472);
  v68 = *(_OWORD *)(v25 + 64);
  v72 = v68;
  v73 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v10;
  if ( ThreadDesktopWindow )
    v26 = *ThreadDesktopWindow;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v24 + 472) + 64LL) = v26;
  if ( ThreadDesktopWindow )
    v27 = *(_QWORD *)(ThreadDesktopWindow[5] + 224);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v24 + 472) + 80LL) = v27;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v55);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  EtwTraceBeginCallback(42LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v28 = KeUserModeCallback(42LL, v8, *(unsigned int *)v8, &v64, &v61);
  EtwTraceEndCallback(42LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v55);
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v24 + 472);
  *(_OWORD *)(v32 + 64) = v68;
  *(_QWORD *)(v32 + 80) = v73;
  if ( v28 >= 0 && v61 == 24 )
  {
    v33 = (__int64 *)v64;
    if ( v64 + 8 < v64 || v64 + 8 > MmUserProbeAddress )
      v33 = (__int64 *)MmUserProbeAddress;
    v34 = *v33;
    v76 = *v33;
    v35 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v35 || (*(_DWORD *)(v35 + 84) & 1) == 0 || *(_OWORD **)(v35 + 96) != v77 )
    {
      v36 = *(_QWORD *)(v64 + 16);
      if ( v36 + 88 < v36 || v36 + 88 > MmUserProbeAddress )
        v36 = MmUserProbeAddress;
      v37 = *(_OWORD *)v36;
      v38 = *(_OWORD *)(v36 + 16);
      v78 = *(_OWORD *)(v36 + 32);
      v39 = *(_OWORD *)(v36 + 48);
      v40 = *(_OWORD *)(v36 + 64);
      v79 = *(_QWORD *)(v36 + 80);
      v77[0] = v37;
      v77[1] = v38;
      v77[2] = v78;
      v77[3] = v39;
      v77[4] = v40;
      *(_QWORD *)&v77[5] = v79;
      a3[1] = v79;
      *(_OWORD *)(*a3 + 32) = v78;
      goto LABEL_42;
    }
  }
LABEL_60:
  v34 = 0LL;
LABEL_42:
  if ( v8 != (unsigned __int8 *)v80 && v8 != v81 )
  {
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v8 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v74);
  }
  return v34;
}
