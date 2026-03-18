/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00984B8
 * Callers:
 *     GreGradientFill @ 0x1C0097F44 (GreGradientFill.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C013AA94 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0097BA0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0098908 (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00B4DE0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2)
{
  _QWORD *v2; // r15
  int v5; // esi
  __int64 v6; // rdx
  __int64 ThreadWin32Thread; // rax
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edx
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 28) = 1;
  v2 = (_QWORD *)((char *)this + 176);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v5 = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = **(_QWORD **)a2;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 23, (HSURF *)this + 22, (unsigned int *)this + 29) )
    return 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0 )
  {
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x800000u;
      GreIncLockCount();
    }
    goto LABEL_14;
  }
  *((_QWORD *)this + 2) = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    v5 = 1;
  }
  v6 = *(_QWORD *)a2;
  v18 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (**(_DWORD **)(v6 + 976) & 1) != 0 || (*(_DWORD *)(v6 + 36) & 0x8000) != 0 )
  {
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v18) )
      goto LABEL_9;
    v6 = *(_QWORD *)a2;
  }
  v13 = *(_QWORD *)(v6 + 64);
  *(_QWORD *)this = v13;
  *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v14 = v13;
  if ( v5 && v13 == ghsemGreLock )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
    v14 = *(_QWORD *)this;
    v5 = 0;
  }
  GreAcquireSemaphore(v14);
  v15 = 2LL;
  if ( *(_QWORD *)this != ghsemGreLock )
    v15 = 11LL;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v15);
  v16 = *((_DWORD *)this + 28);
  if ( (v16 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
    *((_DWORD *)this + 28) = v16 | 0x200;
LABEL_9:
  if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
    GreIncLockCount();
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  }
  v8 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v8 & 0x1000) != 0 && (v8 & 0x4000) == 0 )
  {
    v17 = *((_DWORD *)this + 28);
    if ( (v17 & 0x1000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v17 = *((_DWORD *)this + 28);
    }
    *((_DWORD *)this + 28) = v17 & 0xFFFFFFFE;
LABEL_57:
    if ( v5 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    return 0LL;
  }
LABEL_14:
  v9 = *((_DWORD *)this + 28);
  if ( (v9 & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v9 = *((_DWORD *)this + 28);
      }
      *((_DWORD *)this + 28) = v9 & 0xFFFFFFFE;
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
    *((_DWORD *)this + 28) &= ~1u;
    goto LABEL_57;
  }
LABEL_17:
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_27;
    if ( !*v2 )
      DC::vSetRendering(*(DC **)a2);
    v10 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v11 = v10;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 312) = (char *)this + 120;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
      {
        *(_DWORD *)(v10 + 328) |= 1u;
        *(_QWORD *)(*(_QWORD *)a2 + 1960LL) = 0LL;
        GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        *(_DWORD *)(v11 + 336) = giVisRgnUniqueness;
        EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
      }
    }
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
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
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 0) )
  {
    *((_DWORD *)this + 28) &= ~1u;
    return 0LL;
  }
  if ( (*((_DWORD *)this + 28) & 0x801000) != 0 )
    DLODCOBJ::vLockForDPIScaledClipping((DEVLOCKBLTOBJ *)((char *)this + 120), **(HDC **)a2);
  return 1LL;
}
