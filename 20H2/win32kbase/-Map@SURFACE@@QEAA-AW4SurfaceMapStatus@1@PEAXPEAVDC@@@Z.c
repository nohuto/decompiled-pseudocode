/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0082460
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0082410 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C0082754 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C00939C4 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int *v2; // r14
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v15; // eax
  _QWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  void *v21; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  bool v23; // zf
  char *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  HSEMAPHORE v29; // [rsp+60h] [rbp+8h] BYREF
  void *v30; // [rsp+78h] [rbp+20h] BYREF

  v30 = 0LL;
  if ( !*(_QWORD *)(a1 + 248) && (*(_DWORD *)(a1 + 116) & 1) == 0 || (*(_WORD *)(a1 + 102) & 0x800) == 0 )
    return 0LL;
  v2 = (unsigned int *)(a1 + 272);
  v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v4 = *(_DWORD *)(a1 + 272);
  if ( v4 )
  {
    do
    {
      if ( v4 == v3 )
        break;
      v27 = *(_QWORD *)(a1 + 312);
      ++*(_DWORD *)(a1 + 276);
      KeReleaseMutex((PRKMUTEX)(v27 + 64), 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 312), UserRequest, 0, 0, 0LL);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
      v4 = *v2;
    }
    while ( *v2 );
  }
  v5 = ++*(_DWORD *)(a1 + 280);
  *v2 = v3;
  if ( v5 > *(_DWORD *)(a1 + 284) )
    *(_DWORD *)(a1 + 284) = v5;
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 312) + 64LL), UserRequest, 0, 0, 0LL);
  v7 = (struct _ERESOURCE *)ghsemMapRot;
  v29 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion(v6);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  v8 = *(_QWORD *)(a1 + 264);
  if ( v8 == PsGetCurrentProcessWin32Process(v6) )
  {
    if ( v7 )
    {
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v10, (unsigned int)&LockRelease, v11, (_DWORD)v7, (__int64)L"hsem");
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion(v12);
      v7 = 0LL;
    }
    v13 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    v25 = (_QWORD *)(a1 + 528);
    v10 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v10 + 8) != a1 + 528 )
      goto LABEL_35;
    v26 = *(_QWORD **)(a1 + 536);
    if ( (_QWORD *)*v26 != v25 )
      goto LABEL_35;
    *v26 = v10;
    *(_QWORD *)(v10 + 8) = v26;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v25 = v25;
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
      MmUnmapViewOfSection(**(_QWORD **)(a1 + 264), v9);
  }
  v15 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v15 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( v15
    || (v20 = *(_DWORD *)(a1 + 64),
        v21 = *(void **)(a1 + 248),
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, v9),
        MapKernelSectionForUserMapping(v21, CurrentProcess, v20, &v30),
        v30) )
  {
    v16 = (_QWORD *)(a1 + 528);
    v17 = PsGetCurrentProcessWin32Process(v10) + 224;
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) == v17 )
    {
      *v16 = v18;
      *(_QWORD *)(a1 + 536) = v17;
      *(_QWORD *)(v18 + 8) = v16;
      *(_QWORD *)v17 = v16;
      *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(a1 + 264) = PsGetCurrentProcessWin32Process(v19);
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v23 = (*(_BYTE *)(a1 + 102) & 1) == 0;
        v24 = (char *)v30;
        *(_QWORD *)(a1 + 72) = v30;
        if ( v23 )
          *(_QWORD *)(a1 + 80) = &v24[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
        else
          *(_QWORD *)(a1 + 80) = v24;
      }
      SEMOBJ::vUnlock((PERESOURCE *)&v29);
      SEMOBJ::vUnlock((PERESOURCE *)&v29);
      return 0LL;
    }
LABEL_35:
    __fastfail(3u);
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v29);
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 272));
  v7 = (struct _ERESOURCE *)v29;
  v13 = 2;
LABEL_14:
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v7);
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion(v28);
  }
  return v13;
}
