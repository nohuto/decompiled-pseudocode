/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C001E7E0
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C001E790 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C001EAD4 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0029BB4 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int *v2; // r14
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _ERESOURCE *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  int v18; // eax
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  void *v27; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  bool v29; // zf
  char *v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  PERESOURCE v34; // [rsp+60h] [rbp+8h] BYREF
  void *v35; // [rsp+78h] [rbp+20h] BYREF

  v35 = 0LL;
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
      v33 = *(_QWORD *)(a1 + 312);
      ++*(_DWORD *)(a1 + 276);
      KeReleaseMutex((PRKMUTEX)(v33 + 64), 0);
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
  v10 = ghsemMapRot;
  v34 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
  }
  v11 = *(_QWORD *)(a1 + 264);
  if ( v11 == PsGetCurrentProcessWin32Process(v7, v6, v8, v9) )
  {
    if ( v10 )
    {
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v13, (unsigned int)&LockRelease, v14, (_DWORD)v10, (__int64)L"hsem");
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion();
      v10 = 0LL;
    }
    v16 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    v31 = (_QWORD *)(a1 + 528);
    v13 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v13 + 8) != a1 + 528 )
      goto LABEL_35;
    v32 = *(_QWORD **)(a1 + 536);
    if ( (_QWORD *)*v32 != v31 )
      goto LABEL_35;
    *v32 = v13;
    *(_QWORD *)(v13 + 8) = v32;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v31 = v31;
    v12 = *(_QWORD *)(a1 + 72);
    if ( v12 )
      MmUnmapViewOfSection(**(_QWORD **)(a1 + 264), v12);
  }
  v18 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v18 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( v18
    || (v26 = *(_DWORD *)(a1 + 64),
        v27 = *(void **)(a1 + 248),
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v13, v12),
        MapKernelSectionForUserMapping(v27, CurrentProcess, v26, &v35),
        v35) )
  {
    v19 = (_QWORD *)(a1 + 528);
    v20 = PsGetCurrentProcessWin32Process(v13, v12, v14, v15) + 224;
    v21 = *(_QWORD *)v20;
    if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) == v20 )
    {
      *v19 = v21;
      *(_QWORD *)(a1 + 536) = v20;
      *(_QWORD *)(v21 + 8) = v19;
      *(_QWORD *)v20 = v19;
      *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(a1 + 264) = PsGetCurrentProcessWin32Process(v23, v22, v24, v25);
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v29 = (*(_BYTE *)(a1 + 102) & 1) == 0;
        v30 = (char *)v35;
        *(_QWORD *)(a1 + 72) = v35;
        if ( v29 )
          *(_QWORD *)(a1 + 80) = &v30[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
        else
          *(_QWORD *)(a1 + 80) = v30;
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v34);
      SEMOBJ::vUnlock((SEMOBJ *)&v34);
      return 0LL;
    }
LABEL_35:
    __fastfail(3u);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 272));
  v10 = v34;
  v16 = 2;
LABEL_14:
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion();
  }
  return v16;
}
