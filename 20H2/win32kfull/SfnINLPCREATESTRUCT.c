/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C0075B70
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C007634C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00763F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0077CD0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0078278 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall SfnINLPCREATESTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r12d
  int v10; // r14d
  unsigned __int8 *v11; // rsi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  struct _KTHREAD *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  struct _KTHREAD *v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  struct _KTHREAD *v40; // r14
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 *v45; // rax
  __int64 v46; // rcx
  bool v47; // di
  int v48; // r12d
  __int64 v49; // rcx
  struct _KTHREAD *v50; // r15
  __int64 v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 *v60; // rcx
  __int64 v61; // rbx
  CHAR *v63; // rdx
  void **v64; // r9
  struct _CAPTUREBUF *v65; // rcx
  unsigned int v66; // r8d
  unsigned int v67; // r8d
  int v68; // eax
  unsigned int v69; // eax
  void **v70; // r9
  unsigned int v71; // r8d
  CHAR *v72; // rdx
  unsigned int v73; // r8d
  int v74; // eax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rax
  _DWORD *v77; // rax
  int v78; // r8d
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v81; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v83; // rax
  int v84; // ebx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // ebx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // ebx
  __int64 v93; // rcx
  __int64 v94; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v97; // rax
  int v98; // edi
  __int64 v99; // rcx
  __int64 v100; // rax
  unsigned int v101; // eax
  tagDomLock *v102; // rax
  char v103; // [rsp+30h] [rbp-3F8h]
  unsigned int v104; // [rsp+34h] [rbp-3F4h]
  unsigned int v105; // [rsp+38h] [rbp-3F0h]
  int v106; // [rsp+48h] [rbp-3E0h] BYREF
  int v107; // [rsp+4Ch] [rbp-3DCh] BYREF
  __int16 v108; // [rsp+50h] [rbp-3D8h]
  unsigned int v109; // [rsp+54h] [rbp-3D4h]
  __int64 v110; // [rsp+80h] [rbp-3A8h]
  unsigned __int64 v111; // [rsp+88h] [rbp-3A0h] BYREF
  unsigned int v112; // [rsp+9Ch] [rbp-38Ch]
  __int64 v113; // [rsp+A8h] [rbp-380h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-378h] BYREF
  __int128 v115; // [rsp+B8h] [rbp-370h]
  __int64 v116; // [rsp+C8h] [rbp-360h]
  __int128 v117; // [rsp+D0h] [rbp-358h] BYREF
  __int64 v118; // [rsp+E0h] [rbp-348h]
  __int128 v119; // [rsp+E8h] [rbp-340h] BYREF
  __int64 v120; // [rsp+F8h] [rbp-330h]
  __int64 v121; // [rsp+110h] [rbp-318h]
  _DWORD v122[44]; // [rsp+140h] [rbp-2E8h] BYREF
  unsigned __int8 v123[512]; // [rsp+1F0h] [rbp-238h] BYREF

  v113 = a3;
  v109 = a2;
  v104 = 0;
  v105 = 0;
  v9 = 0;
  v10 = a7 & 1;
  memset(v122, 0, 0xA8uLL);
  v11 = (unsigned __int8 *)v122;
  v111 = 0LL;
  v107 = 0;
  v117 = 0LL;
  v118 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v110 = 0LL;
  if ( (!(unsigned __int8)KeIsAttachedProcess(v13)
     || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v81),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL )
  {
    v18 = *ThreadWin32Thread;
    v110 = v18;
  }
  else
  {
    v18 = 0LL;
  }
  if ( a1 )
    v19 = a1[5] - *(_QWORD *)(v18 + 472);
  else
    v19 = 0LL;
  if ( a4 )
  {
    v20 = *(_QWORD *)(a4 + 56);
    if ( v20 && (*(_DWORD *)(a4 + 84) >> 31 != v10 || v20 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v21 = *(_DWORD *)(a4 + 80);
      if ( v21 + 2 < v21 )
        goto LABEL_66;
      v104 = v21 + 2;
      if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
      {
        v76 = 2LL * (v21 + 2);
        if ( v76 > 0xFFFFFFFF )
          goto LABEL_66;
        v104 = v76;
      }
      v9 = 1;
    }
    v22 = *(_QWORD *)(a4 + 64);
    if ( (v22 & 0xFFFFFFFFFFFF0000uLL) != 0
      && (*(_DWORD *)(a4 + 100) >> 31 != v10 || v22 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v69 = *(_DWORD *)(a4 + 96);
      if ( v69 + 2 < v69 )
        goto LABEL_66;
      v105 = v69 + 2;
      if ( *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 )
      {
        v75 = 2LL * (v69 + 2);
        if ( v75 > 0xFFFFFFFF )
          goto LABEL_66;
        v105 = v75;
      }
      ++v9;
    }
  }
  v23 = v104 + v105;
  if ( (unsigned int)v23 < v104 )
    goto LABEL_66;
  v112 = v104 + v105;
  if ( v9 )
  {
    v11 = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v9, v23, v123, 1, 0x200uLL);
    if ( !v11 )
      return 0LL;
  }
  else
  {
    v11 = (unsigned __int8 *)v122;
    memset(&v122[1], 0, 0xA4uLL);
    v122[0] = 168;
  }
  v25 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v24)
    || (v83 = PsGetCurrentProcess(v27, v26, v28),
        v84 = PsGetProcessSessionIdEx(v83),
        v86 = PsGetCurrentThreadProcess(v85),
        v84 == (unsigned int)PsGetProcessSessionIdEx(v86)) )
  {
    PsGetThreadWin32Thread(v25);
  }
  v119 = 0LL;
  v120 = 0LL;
  if ( v11 != (unsigned __int8 *)v122 && v11 != v123 )
    PushW32ThreadLock(v11, &v119, Win32FreePool);
  *((_QWORD *)v11 + 5) = v19;
  *((_DWORD *)v11 + 12) = v109;
  *((_QWORD *)v11 + 7) = v113;
  *((_QWORD *)v11 + 8) = a4 != 0;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 52) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(_OWORD *)(v11 + 72) = *(_OWORD *)a4;
    *(_OWORD *)(v11 + 88) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v11 + 104) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v11 + 120) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v11 + 136) = *(_OWORD *)(a4 + 64);
    if ( !v104 )
      goto LABEL_24;
    if ( *(int *)(a4 + 84) < 0 )
    {
      v77 = *(_DWORD **)(a4 + 56);
      if ( *(_BYTE *)v77 == 0xFF )
      {
        if ( (a7 & 1) != 0 )
        {
          v67 = 3;
          v63 = *(CHAR **)(a4 + 56);
        }
        else
        {
          v106 = 0;
          v106 = ((unsigned __int16)(*v77 >> 8) << 16) | 0xFFFF;
          v67 = 4;
          v63 = (CHAR *)&v106;
        }
        v64 = (void **)(v11 + 128);
        v65 = (struct _CAPTUREBUF *)v11;
      }
      else
      {
        v64 = (void **)(v11 + 128);
        v78 = *(_DWORD *)(a4 + 80);
        v63 = *(CHAR **)(a4 + 88);
        v65 = (struct _CAPTUREBUF *)v11;
        if ( (a7 & 1) == 0 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v63, 2 * v78 + 2, v64) < 0 )
            goto LABEL_66;
          goto LABEL_24;
        }
        v67 = v78 + 1;
      }
    }
    else
    {
      v63 = *(CHAR **)(a4 + 56);
      v108 = *(_WORD *)v63;
      v64 = (void **)(v11 + 128);
      v65 = (struct _CAPTUREBUF *)v11;
      if ( v108 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v63;
          v67 = 3;
        }
        else
        {
          v67 = 4;
        }
      }
      else
      {
        v66 = *(_DWORD *)(a4 + 80);
        v63 = *(CHAR **)(a4 + 88);
        if ( (a7 & 1) != 0 )
        {
          v68 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v63, (v66 >> 1) + 1, v64);
LABEL_65:
          if ( v68 < 0 )
            goto LABEL_66;
LABEL_24:
          if ( !v105 )
            goto LABEL_25;
          v70 = (void **)(v11 + 136);
          v71 = *(_DWORD *)(a4 + 96);
          v72 = *(CHAR **)(a4 + 104);
          if ( *(int *)(a4 + 100) < 0 )
          {
            if ( (a7 & 1) != 0 )
            {
              v73 = v71 + 1;
              goto LABEL_76;
            }
            v74 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v72, 2 * v71 + 2, v70);
          }
          else
          {
            if ( (a7 & 1) == 0 )
            {
              v73 = v71 + 2;
LABEL_76:
              v74 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v72, v73, v70);
              goto LABEL_77;
            }
            v74 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v72, (v71 >> 1) + 1, v70);
          }
LABEL_77:
          if ( v74 < 0 )
            goto LABEL_66;
          goto LABEL_25;
        }
        v67 = v66 + 2;
      }
    }
    v68 = CaptureCallbackData(v65, v63, v67, v64);
    goto LABEL_65;
  }
LABEL_25:
  *((_QWORD *)v11 + 19) = a5;
  *((_QWORD *)v11 + 20) = a6;
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v29)
    || (v87 = PsGetCurrentProcess(v33, v32, v34),
        v88 = PsGetProcessSessionIdEx(v87),
        v90 = PsGetCurrentThreadProcess(v89),
        v88 == (unsigned int)PsGetProcessSessionIdEx(v90)) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v35 )
      v31 = *v35;
  }
  *(_QWORD *)&v117 = *(_QWORD *)(v31 + 416);
  *(_QWORD *)(v31 + 416) = &v117;
  *((_QWORD *)&v117 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v36 = v110;
  v37 = *(_QWORD *)(v110 + 480);
  v115 = *(_OWORD *)(v37 + 64);
  v116 = *(_QWORD *)(v37 + 80);
  *(_QWORD *)(v37 + 72) = v19;
  if ( a1 )
    v38 = *a1;
  else
    v38 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v36 + 480) + 64LL) = v38;
  if ( a1 )
    v39 = *(_QWORD *)(a1[5] + 224);
  else
    v39 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v36 + 480) + 80LL) = v39;
  if ( gdwInAtomicOperation )
  {
    v39 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v40 = KeGetCurrentThread();
  v41 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v39)
    || (v91 = PsGetCurrentProcess(v43, v42, v44),
        v92 = PsGetProcessSessionIdEx(v91),
        v94 = PsGetCurrentThreadProcess(v93),
        v92 == (unsigned int)PsGetProcessSessionIdEx(v94)) )
  {
    v45 = (__int64 *)PsGetThreadWin32Thread(v40);
    if ( v45 )
      v41 = *v45;
  }
  v103 = *(_BYTE *)(v41 + 1480);
  *(_BYTE *)(v41 + 1480) = 0;
  if ( (v103 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v41 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v47 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v46);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v48 = KeUserModeCallback(10LL, v11, *(unsigned int *)v11, &v111, &v107);
  EtwTraceEndCallback(10LL);
  if ( v47 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v50 = KeGetCurrentThread();
  v51 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v49)
    || (v97 = PsGetCurrentProcess(v53, v52, v54),
        v98 = PsGetProcessSessionIdEx(v97),
        v100 = PsGetCurrentThreadProcess(v99),
        v98 == (unsigned int)PsGetProcessSessionIdEx(v100)) )
  {
    v55 = (__int64 *)PsGetThreadWin32Thread(v50);
    if ( v55 )
      v51 = *v55;
  }
  if ( (v103 & 1) != 0 )
  {
    v101 = DLT_THREADINFO::getDLT();
    v102 = (tagDomLock *)GetDomainLockRef(v101);
    tagDomLock::LockShared(v102);
    tagObjLock::LockExclusive((tagObjLock *)(v51 + 392));
  }
  *(_BYTE *)(v51 + 1480) = v103;
  ThreadUnlock1(v57, v56, v58);
  v59 = *(_QWORD *)(v110 + 480);
  *(_OWORD *)(v59 + 64) = v115;
  *(_QWORD *)(v59 + 80) = v116;
  if ( v48 >= 0 && v107 == 24 )
  {
    v60 = (__int64 *)v111;
    if ( v111 + 8 < v111 || v111 + 8 > MmUserProbeAddress )
      v60 = (__int64 *)MmUserProbeAddress;
    v61 = *v60;
    v121 = *v60;
    goto LABEL_57;
  }
LABEL_66:
  v61 = 0LL;
LABEL_57:
  if ( v11 != (unsigned __int8 *)v122 && v11 != v123 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v119);
  }
  return v61;
}
