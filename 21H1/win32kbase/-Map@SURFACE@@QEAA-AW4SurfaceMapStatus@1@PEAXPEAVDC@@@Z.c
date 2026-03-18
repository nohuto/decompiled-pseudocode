/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C00089F0
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C00089A0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C0008CE4 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0019F04 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
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
  unsigned int v12; // edi
  int v14; // eax
  _QWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *v20; // rsi
  struct _EPROCESS *CurrentProcess; // rax
  bool v22; // zf
  char *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  PERESOURCE v27; // [rsp+60h] [rbp+8h] BYREF
  void *v28; // [rsp+78h] [rbp+20h] BYREF

  v28 = 0LL;
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
      v26 = *(_QWORD *)(a1 + 312);
      ++*(_DWORD *)(a1 + 276);
      KeReleaseMutex((PRKMUTEX)(v26 + 64), 0);
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
  v7 = ghsemMapRot;
  v27 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion();
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
      PsLeavePriorityRegion();
      v7 = 0LL;
    }
    v12 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 264) )
  {
    v24 = (_QWORD *)(a1 + 528);
    v10 = *(_QWORD *)(a1 + 528);
    if ( *(_QWORD *)(v10 + 8) != a1 + 528 )
      goto LABEL_35;
    v25 = *(_QWORD **)(a1 + 536);
    if ( (_QWORD *)*v25 != v24 )
      goto LABEL_35;
    *v25 = v10;
    *(_QWORD *)(v10 + 8) = v25;
    *(_QWORD *)(a1 + 536) = a1 + 528;
    *v24 = v24;
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
      MmUnmapViewOfSection(**(_QWORD **)(a1 + 264));
  }
  v14 = *(_DWORD *)(a1 + 116) & 1;
  if ( !v14 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  if ( v14
    || (v19 = *(_DWORD *)(a1 + 64),
        v20 = *(void **)(a1 + 248),
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, v9),
        MapKernelSectionForUserMapping(v20, CurrentProcess, v19, &v28),
        v28) )
  {
    v15 = (_QWORD *)(a1 + 528);
    v16 = PsGetCurrentProcessWin32Process(v10) + 224;
    v17 = *(_QWORD *)v16;
    if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) == v16 )
    {
      *v15 = v17;
      *(_QWORD *)(a1 + 536) = v16;
      *(_QWORD *)(v17 + 8) = v15;
      *(_QWORD *)v16 = v15;
      *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(a1 + 264) = PsGetCurrentProcessWin32Process(v18);
      if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
      {
        v22 = (*(_BYTE *)(a1 + 102) & 1) == 0;
        v23 = (char *)v28;
        *(_QWORD *)(a1 + 72) = v28;
        if ( v22 )
          *(_QWORD *)(a1 + 80) = &v23[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
        else
          *(_QWORD *)(a1 + 80) = v23;
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v27);
      SEMOBJ::vUnlock((SEMOBJ *)&v27);
      return 0LL;
    }
LABEL_35:
    __fastfail(3u);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 312) + 64LL), 0);
  W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 272));
  v7 = v27;
  v12 = 2;
LABEL_14:
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v7);
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion();
  }
  return v12;
}
