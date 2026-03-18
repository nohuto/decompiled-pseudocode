/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C0046CB0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C004748C (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0047ED0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0048008 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
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
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  struct _KTHREAD *v20; // r12
  struct _KTHREAD *v21; // r14
  __int64 v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _KTHREAD *v28; // r14
  __int64 v29; // rdi
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  bool v34; // di
  int v35; // r12d
  struct _KTHREAD *v36; // r15
  __int64 v37; // r14
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 *v43; // rcx
  __int64 v44; // rbx
  CHAR *v46; // rdx
  void **v47; // r9
  struct _CAPTUREBUF *v48; // rcx
  unsigned int v49; // r8d
  unsigned int v50; // r8d
  int v51; // eax
  unsigned int v52; // eax
  void **v53; // r9
  unsigned int v54; // r8d
  CHAR *v55; // rdx
  unsigned int v56; // r8d
  int v57; // eax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  _DWORD *v60; // rax
  int v61; // r8d
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v65; // rax
  int v66; // ebx
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // ebx
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // ebx
  __int64 v73; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v76; // rax
  int v77; // edi
  __int64 v78; // rax
  unsigned int v79; // eax
  tagDomLock *v80; // rax
  char v81; // [rsp+30h] [rbp-3F8h]
  unsigned int v82; // [rsp+34h] [rbp-3F4h]
  unsigned int v83; // [rsp+38h] [rbp-3F0h]
  int v84; // [rsp+48h] [rbp-3E0h] BYREF
  int v85; // [rsp+4Ch] [rbp-3DCh] BYREF
  __int16 v86; // [rsp+50h] [rbp-3D8h]
  unsigned int v87; // [rsp+54h] [rbp-3D4h]
  __int64 v88; // [rsp+80h] [rbp-3A8h]
  unsigned __int64 v89; // [rsp+88h] [rbp-3A0h] BYREF
  unsigned int v90; // [rsp+9Ch] [rbp-38Ch]
  __int64 v91; // [rsp+A8h] [rbp-380h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-378h] BYREF
  __int128 v93; // [rsp+B8h] [rbp-370h]
  __int64 v94; // [rsp+C8h] [rbp-360h]
  __int128 v95; // [rsp+D0h] [rbp-358h] BYREF
  __int64 v96; // [rsp+E0h] [rbp-348h]
  __int128 v97; // [rsp+E8h] [rbp-340h] BYREF
  __int64 v98; // [rsp+F8h] [rbp-330h]
  __int64 v99; // [rsp+110h] [rbp-318h]
  _DWORD v100[44]; // [rsp+140h] [rbp-2E8h] BYREF
  unsigned __int8 v101[512]; // [rsp+1F0h] [rbp-238h] BYREF

  v91 = a3;
  v87 = a2;
  v82 = 0;
  v83 = 0;
  v9 = 0;
  v10 = a7 & 1;
  memset(v100, 0, 0xA8uLL);
  v11 = (unsigned __int8 *)v100;
  v89 = 0LL;
  v85 = 0;
  v95 = 0LL;
  v96 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v88 = 0LL;
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL )
  {
    v14 = *ThreadWin32Thread;
    v88 = v14;
  }
  else
  {
    v14 = 0LL;
  }
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(v14 + 464);
  else
    v15 = 0LL;
  if ( a4 )
  {
    v16 = *(_QWORD *)(a4 + 56);
    if ( v16 && (*(_DWORD *)(a4 + 84) >> 31 != v10 || v16 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v17 = *(_DWORD *)(a4 + 80);
      if ( v17 + 2 < v17 )
        goto LABEL_66;
      v82 = v17 + 2;
      if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
      {
        v59 = 2LL * (v17 + 2);
        if ( v59 > 0xFFFFFFFF )
          goto LABEL_66;
        v82 = v59;
      }
      v9 = 1;
    }
    v18 = *(_QWORD *)(a4 + 64);
    if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0
      && (*(_DWORD *)(a4 + 100) >> 31 != v10 || v18 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v52 = *(_DWORD *)(a4 + 96);
      if ( v52 + 2 < v52 )
        goto LABEL_66;
      v83 = v52 + 2;
      if ( *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 )
      {
        v58 = 2LL * (v52 + 2);
        if ( v58 > 0xFFFFFFFF )
          goto LABEL_66;
        v83 = v58;
      }
      ++v9;
    }
  }
  v19 = v82 + v83;
  if ( (unsigned int)v19 < v82 )
    goto LABEL_66;
  v90 = v82 + v83;
  if ( v9 )
  {
    v11 = (unsigned __int8 *)AllocCallbackMessage(0xA8u, v9, v19, v101, 1, 0x200uLL);
    if ( !v11 )
      return 0LL;
  }
  else
  {
    v11 = (unsigned __int8 *)v100;
    memset(&v100[1], 0, 0xA4uLL);
    v100[0] = 168;
  }
  v20 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v65 = PsGetCurrentProcess(),
        v66 = PsGetProcessSessionIdEx(v65),
        v67 = PsGetCurrentThreadProcess(),
        v66 == (unsigned int)PsGetProcessSessionIdEx(v67)) )
  {
    PsGetThreadWin32Thread(v20);
  }
  v97 = 0LL;
  v98 = 0LL;
  if ( v11 != (unsigned __int8 *)v100 && v11 != v101 )
    PushW32ThreadLock((__int64)v11, &v97, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v15;
  *((_DWORD *)v11 + 12) = v87;
  *((_QWORD *)v11 + 7) = v91;
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
    if ( !v82 )
      goto LABEL_24;
    if ( *(int *)(a4 + 84) < 0 )
    {
      v60 = *(_DWORD **)(a4 + 56);
      if ( *(_BYTE *)v60 == 0xFF )
      {
        if ( (a7 & 1) != 0 )
        {
          v50 = 3;
          v46 = *(CHAR **)(a4 + 56);
        }
        else
        {
          v84 = 0;
          v84 = ((unsigned __int16)(*v60 >> 8) << 16) | 0xFFFF;
          v50 = 4;
          v46 = (CHAR *)&v84;
        }
        v47 = (void **)(v11 + 128);
        v48 = (struct _CAPTUREBUF *)v11;
      }
      else
      {
        v47 = (void **)(v11 + 128);
        v61 = *(_DWORD *)(a4 + 80);
        v46 = *(CHAR **)(a4 + 88);
        v48 = (struct _CAPTUREBUF *)v11;
        if ( (a7 & 1) == 0 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v46, 2 * v61 + 2, v47) < 0 )
            goto LABEL_66;
          goto LABEL_24;
        }
        v50 = v61 + 1;
      }
    }
    else
    {
      v46 = *(CHAR **)(a4 + 56);
      v86 = *(_WORD *)v46;
      v47 = (void **)(v11 + 128);
      v48 = (struct _CAPTUREBUF *)v11;
      if ( v86 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v46;
          v50 = 3;
        }
        else
        {
          v50 = 4;
        }
      }
      else
      {
        v49 = *(_DWORD *)(a4 + 80);
        v46 = *(CHAR **)(a4 + 88);
        if ( (a7 & 1) != 0 )
        {
          v51 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v46, (v49 >> 1) + 1, v47);
LABEL_65:
          if ( v51 < 0 )
            goto LABEL_66;
LABEL_24:
          if ( !v83 )
            goto LABEL_25;
          v53 = (void **)(v11 + 136);
          v54 = *(_DWORD *)(a4 + 96);
          v55 = *(CHAR **)(a4 + 104);
          if ( *(int *)(a4 + 100) < 0 )
          {
            if ( (a7 & 1) != 0 )
            {
              v56 = v54 + 1;
              goto LABEL_76;
            }
            v57 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v55, 2 * v54 + 2, v53);
          }
          else
          {
            if ( (a7 & 1) == 0 )
            {
              v56 = v54 + 2;
LABEL_76:
              v57 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v55, v56, v53);
              goto LABEL_77;
            }
            v57 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v55, (v54 >> 1) + 1, v53);
          }
LABEL_77:
          if ( v57 < 0 )
            goto LABEL_66;
          goto LABEL_25;
        }
        v50 = v49 + 2;
      }
    }
    v51 = CaptureCallbackData(v48, v46, v50, v47);
    goto LABEL_65;
  }
LABEL_25:
  *((_QWORD *)v11 + 19) = a5;
  *((_QWORD *)v11 + 20) = a6;
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v68 = PsGetCurrentProcess(),
        v69 = PsGetProcessSessionIdEx(v68),
        v70 = PsGetCurrentThreadProcess(),
        v69 == (unsigned int)PsGetProcessSessionIdEx(v70)) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v23 )
      v22 = *v23;
  }
  *(_QWORD *)&v95 = *(_QWORD *)(v22 + 408);
  *(_QWORD *)(v22 + 408) = &v95;
  *((_QWORD *)&v95 + 1) = a1;
  if ( a1 )
    HMLockObject(a1);
  v24 = v88;
  v25 = *(_QWORD *)(v88 + 472);
  v93 = *(_OWORD *)(v25 + 64);
  v94 = *(_QWORD *)(v25 + 80);
  *(_QWORD *)(v25 + 72) = v15;
  if ( a1 )
    v26 = *a1;
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v24 + 472) + 64LL) = v26;
  if ( a1 )
    v27 = *(_QWORD *)(a1[5] + 224);
  else
    v27 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v24 + 472) + 80LL) = v27;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  v28 = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v71 = PsGetCurrentProcess(),
        v72 = PsGetProcessSessionIdEx(v71),
        v73 = PsGetCurrentThreadProcess(),
        v72 == (unsigned int)PsGetProcessSessionIdEx(v73)) )
  {
    v30 = (__int64 *)PsGetThreadWin32Thread(v28);
    if ( v30 )
      v29 = *v30;
  }
  v81 = *(_BYTE *)(v29 + 1472);
  *(_BYTE *)(v29 + 1472) = 0;
  if ( (v81 & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v29 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  v34 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v32, v31, v33);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v35 = KeUserModeCallback(10LL, v11, *(unsigned int *)v11, &v89, &v85);
  EtwTraceEndCallback(10LL);
  if ( v34 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v36 = KeGetCurrentThread();
  v37 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v76 = PsGetCurrentProcess(),
        v77 = PsGetProcessSessionIdEx(v76),
        v78 = PsGetCurrentThreadProcess(),
        v77 == (unsigned int)PsGetProcessSessionIdEx(v78)) )
  {
    v38 = (__int64 *)PsGetThreadWin32Thread(v36);
    if ( v38 )
      v37 = *v38;
  }
  if ( (v81 & 1) != 0 )
  {
    v79 = DLT_THREADINFO::getDLT();
    v80 = (tagDomLock *)GetDomainLockRef(v79);
    tagDomLock::LockShared(v80);
    tagObjLock::LockExclusive((tagObjLock *)(v37 + 384));
  }
  *(_BYTE *)(v37 + 1472) = v81;
  ThreadUnlock1(v40, v39, v41);
  v42 = *(_QWORD *)(v88 + 472);
  *(_OWORD *)(v42 + 64) = v93;
  *(_QWORD *)(v42 + 80) = v94;
  if ( v35 >= 0 && v85 == 24 )
  {
    v43 = (__int64 *)v89;
    if ( v89 + 8 < v89 || v89 + 8 > MmUserProbeAddress )
      v43 = (__int64 *)MmUserProbeAddress;
    v44 = *v43;
    v99 = *v43;
    goto LABEL_57;
  }
LABEL_66:
  v44 = 0LL;
LABEL_57:
  if ( v11 != (unsigned __int8 *)v100 && v11 != v101 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v97);
  }
  return v44;
}
