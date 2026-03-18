/*
 * XREFs of _NtGdiSetPUMPDOBJ@16 @ 0x21AE6D
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z @ 0x1E7C30 (-bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QAE_NXZ @ 0x21010F (-bTryAcquireExclussiveAccess@UMPDOBJ@@QAE_NXZ.c)
 *     ??1UMPDREF@@QAE@XZ @ 0x2161D1 (--1UMPDREF@@QAE@XZ.c)
 */

int __stdcall NtGdiSetPUMPDOBJ(int a1, int a2, PATHOBJ *a3, unsigned int a4)
{
  int v4; // edi
  int v5; // esi
  PATHOBJ *v7; // edi
  struct _KPROCESS *CurrentProcess; // eax
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // edx
  int v11; // eax
  _DWORD *v12; // ecx
  int CurrentProcessWin32Process; // eax
  int v14; // esi
  bool v15; // al
  PATHOBJ *v16; // ecx
  PKTHREAD v17; // eax
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // ecx
  FLONG fl; // edi
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v23; // esi
  PKTHREAD v24; // eax
  _DWORD *v25; // esi
  UMPDOBJ *v26; // [esp+18h] [ebp-24h]
  PEPROCESS Process; // [esp+1Ch] [ebp-20h] BYREF
  _DWORD *v28; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v4 = a1;
  if ( a1 )
  {
    v5 = HmgShareLock(a1, 17);
    v26 = (UMPDOBJ *)v5;
  }
  else
  {
    v5 = 0;
    v26 = 0;
  }
  a1 = v5;
  if ( a2 )
  {
    if ( !v4 || !v5 )
      goto LABEL_9;
    v7 = a3;
  }
  else
  {
    v7 = a3;
    if ( !a3 )
    {
LABEL_9:
      UMPDREF::~UMPDREF((PATHOBJ **)&a1);
      return 0;
    }
  }
  if ( gUMPDSecurityLevel == 1 )
  {
    if ( v5 )
    {
      Process = 0;
      PsLookupProcessByProcessId(*(HANDLE *)(v5 + 216), &Process);
      if ( bIsProcessLocalSystem(Process) )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
        if ( !bIsProcessLocalSystem(CurrentProcess) )
          goto LABEL_9;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  v28 = ThreadWin32Thread;
  if ( !ThreadWin32Thread )
    goto LABEL_9;
  if ( a2 )
  {
    v11 = *(_DWORD *)(v5 + 232);
    a2 = v11;
    ms_exc.registration.TryLevel = 0;
    v12 = (_DWORD *)a4;
    if ( a4 )
    {
      a3 = (PATHOBJ *)_MmUserProbeAddress;
      if ( a4 + 4 > _MmUserProbeAddress || a4 + 4 <= a4 )
        LOBYTE(a3->fl) = 0;
      v11 = a2;
      *v12 = a2;
    }
    ms_exc.registration.TryLevel = -2;
    if ( v11 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process && *(_DWORD *)(CurrentProcessWin32Process + 148) )
        goto LABEL_9;
      v14 = *(_DWORD *)(v5 + 216);
      if ( v14 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_9;
      if ( (_DWORD *)v28[5] != v28 + 5 )
        goto LABEL_9;
      a3 = (PATHOBJ *)PALLOCMEM2(8u, 1684631623, 1);
      if ( !a3 )
        goto LABEL_9;
      ms_exc.registration.TryLevel = 1;
      if ( (unsigned int)&v7->cCurves > _MmUserProbeAddress || &v7->cCurves <= (ULONG *)v7 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      v7->fl = 0;
      ms_exc.registration.TryLevel = -2;
      v15 = UMPDOBJ::bTryAcquireExclussiveAccess(v26);
      v16 = a3;
      if ( !v15 )
      {
        Win32FreePool(a3);
        goto LABEL_9;
      }
      a3->fl = *((_DWORD *)v26 + 53);
      v16->cCurves = *((_DWORD *)v26 + 54);
      v28[9] = v16;
      v17 = KeGetCurrentThread();
      v18 = (_DWORD *)((char *)v26 + 28);
      v19 = W32GetThreadWin32Thread(v17) + 20;
      v20 = *(_DWORD *)v19;
      if ( *(_DWORD *)(*(_DWORD *)v19 + 4) != v19 )
        __fastfail(3u);
      *v18 = v20;
      *((_DWORD *)v26 + 8) = v19;
      *(_DWORD *)(v20 + 4) = v18;
      *(_DWORD *)v19 = v18;
      a1 = 0;
    }
    else
    {
      if ( (struct UMPDOBJ *)v5 != UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread) )
        goto LABEL_9;
      ms_exc.registration.TryLevel = 2;
      if ( (unsigned int)&v7->cCurves > _MmUserProbeAddress || &v7->cCurves <= (ULONG *)v7 )
        *(_BYTE *)_MmUserProbeAddress = 0;
      v7->fl = 0;
      ms_exc.registration.TryLevel = -2;
    }
  }
  else
  {
    ms_exc.registration.TryLevel = 3;
    if ( &v7->cCurves < (ULONG *)v7 || (unsigned int)&v7->cCurves > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    fl = v7->fl;
    ms_exc.registration.TryLevel = -2;
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    v23 = ThreadCurrentObj;
    if ( !ThreadCurrentObj || fl != *(_DWORD *)ThreadCurrentObj )
      goto LABEL_9;
    if ( *((_DWORD *)ThreadCurrentObj + 58) )
    {
      v24 = KeGetCurrentThread();
      if ( *((_DWORD *)v23 + 4) != W32GetThreadWin32Thread(v24) )
        goto LABEL_9;
      *((_BYTE *)v23 + 20) |= 2u;
      UMPDOBJ::vRelease(v23, 1);
      v25 = v28;
      if ( v28[9] )
      {
        Win32FreePool((PATHOBJ *)v28[9]);
        v25[9] = 0;
      }
    }
  }
  UMPDREF::~UMPDREF((PATHOBJ **)&a1);
  return 1;
}
