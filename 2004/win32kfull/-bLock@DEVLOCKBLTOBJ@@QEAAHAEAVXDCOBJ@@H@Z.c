/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001BD00
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C001967C (GreGradientFill.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0138AC4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C14C (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C001C188 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0079160 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2)
{
  _QWORD *v2; // r15
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edx
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbp
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // edx
  int v29; // eax
  __int64 v30; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 18) = 1;
  v2 = (_QWORD *)((char *)this + 136);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v5 = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = **(_QWORD **)a2;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 18, (HSURF *)this + 17, (unsigned int *)this + 19) )
    return 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0 )
  {
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x800000u;
      GreIncLockCount();
    }
    goto LABEL_14;
  }
  *((_QWORD *)this + 2) = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, v6, v7, v8);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  *((_DWORD *)this + 18) |= 8u;
  if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock, v9, v10, v11);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    v5 = 1;
  }
  v12 = *(_QWORD *)a2;
  v30 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (**(_DWORD **)(v12 + 976) & 1) != 0 || (*(_DWORD *)(v12 + 36) & 0x8000) != 0 )
  {
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v30) )
      goto LABEL_9;
    v12 = *(_QWORD *)a2;
  }
  v25 = *(_QWORD *)(v12 + 64);
  *(_QWORD *)this = v25;
  *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v26 = v25;
  if ( v5 && v25 == ghsemGreLock )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
    v26 = *(_QWORD *)this;
    v5 = 0;
  }
  GreAcquireSemaphore(v26);
  v27 = 2LL;
  if ( *(_QWORD *)this != ghsemGreLock )
    v27 = 11LL;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v27);
  v28 = *((_DWORD *)this + 18);
  if ( (v28 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
    *((_DWORD *)this + 18) = v28 | 0x200;
LABEL_9:
  if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 18) |= 0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
    GreIncLockCount();
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn, v14, v15, v16);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  }
  v17 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v17 & 0x1000) != 0 && (v17 & 0x4000) == 0 )
  {
    v29 = *((_DWORD *)this + 18);
    if ( (v29 & 0x1000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v29 = *((_DWORD *)this + 18);
    }
    *((_DWORD *)this + 18) = v29 & 0xFFFFFFFE;
LABEL_57:
    if ( v5 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    return 0LL;
  }
LABEL_14:
  v18 = *((_DWORD *)this + 18);
  if ( (v18 & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v18 = *((_DWORD *)this + 18);
      }
      *((_DWORD *)this + 18) = v18 & 0xFFFFFFFE;
      goto LABEL_57;
    }
  }
  else if ( *((_QWORD *)this + 2) )
  {
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x10) != 0 && !DC::bCompute(*(DC **)a2) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
    *((_DWORD *)this + 18) &= ~1u;
    goto LABEL_57;
  }
LABEL_17:
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
      goto LABEL_27;
    if ( !*v2 )
      DC::vSetRendering(*(DC **)a2);
    v19 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v23 = v19;
    if ( v19 )
    {
      *(_QWORD *)(v19 + 312) = (char *)this + 80;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
      {
        *(_DWORD *)(v19 + 328) |= 1u;
        *(_QWORD *)(*(_QWORD *)a2 + 1960LL) = 0LL;
        GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness, v20, v21, v22);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        *(_DWORD *)(v23 + 336) = giVisRgnUniqueness;
        EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
      }
    }
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_27:
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 0) )
  {
    *((_DWORD *)this + 18) &= ~1u;
    return 0LL;
  }
  if ( (*((_DWORD *)this + 18) & 0x801000) != 0 )
    DLODCOBJ::vLockForDPIScaledClipping((DEVLOCKBLTOBJ *)((char *)this + 80), **(HDC **)a2);
  return 1LL;
}
