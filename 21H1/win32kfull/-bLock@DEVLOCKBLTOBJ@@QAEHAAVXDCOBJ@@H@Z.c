/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0xBD6B8
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z @ 0xBB65A (-GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z @ 0x5A4E6 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z.c)
 *     ?bInFullScreen@DC@@QAEHXZ @ 0x79454 (-bInFullScreen@DC@@QAEHXZ.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QAEXPAUHDC__@@@Z @ 0xBDADA (-vLockForDPIScaledClipping@DLODCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?TrapAppContainerRendering@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0xBDAFA (-TrapAppContainerRendering@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z.c)
 */

int __thiscall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, DC **a2, int a3)
{
  DC **v4; // edi
  struct XDCOBJ *v5; // ecx
  DC *v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v12; // eax
  int v13; // ecx
  PKTHREAD v15; // eax
  int v16; // eax
  HSURF *v17; // [esp+0h] [ebp-18h]
  unsigned int *v18; // [esp+4h] [ebp-14h]
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]

  v20 = 0;
  v4 = a2;
  v5 = (DEVLOCKBLTOBJ *)((char *)this + 84);
  *(_DWORD *)this = 0;
  *(_DWORD *)v5 = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 1;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 23) = *(_DWORD *)*v4;
  if ( !TrapAppContainerRendering(v5, (HSURF *)this + 11, v17, v18) )
    return 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 16) = 0;
  if ( (*((_DWORD *)*v4 + 6) & 0x200) == 0 )
  {
    if ( !GreGetLockCount() )
    {
      *((_DWORD *)this + 10) |= 0x800000u;
      GreIncLockCount();
    }
    goto LABEL_26;
  }
  *((_DWORD *)this + 2) = _ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  *((_DWORD *)this + 10) |= 8u;
  if ( !GreGetLockCount() && !GreIsSemaphoreOwnedOrSharedByCurrentThread(_ghsemGreLock) )
  {
    GreAcquireSemaphoreSharedInternal(_ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", _ghsemGreLock);
    v20 = 1;
  }
  v6 = *v4;
  a2 = (DC **)*((_DWORD *)*v4 + 9);
  if ( (**((_BYTE **)v6 + 255) & 1) != 0 || (*((_DWORD *)v6 + 6) & 0x8000) != 0 )
  {
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&a2) )
      goto LABEL_16;
    v6 = *v4;
  }
  v7 = *((_DWORD *)v6 + 11);
  *(_DWORD *)this = v7;
  *((_DWORD *)this + 3) = *((_DWORD *)*v4 + 9);
  v8 = v7;
  if ( v20 )
  {
    v8 = v7;
    if ( v7 == _ghsemGreLock )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
      GreReleaseSemaphoreInternal(_ghsemGreLock);
      v20 = 0;
      v8 = *(_DWORD *)this;
    }
  }
  GreAcquireSemaphore(v8);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_DWORD *)this, *(_DWORD *)this == _ghsemGreLock ? 2 : 11);
  v9 = *((_DWORD *)this + 10);
  if ( (v9 & 0x200) == 0 && (*((_DWORD *)*v4 + 6) & 0x4000) != 0 )
    *((_DWORD *)this + 10) = v9 | 0x200;
LABEL_16:
  if ( !GreGetLockCount() )
  {
    *((_DWORD *)this + 10) |= 0x1000u;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      *(_DWORD *)(ThreadWin32Thread + 176) = 0;
      *(_DWORD *)(ThreadWin32Thread + 172) = 0;
    }
    GreIncLockCount();
    GreAcquireSemaphoreSharedInternal(_ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", _ghsemDCVisRgn);
  }
  if ( DC::bInFullScreen(*v4) )
  {
    v12 = *((_DWORD *)this + 10);
    if ( (v12 & 0x1000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
      v12 = *((_DWORD *)this + 10);
    }
    *((_DWORD *)this + 10) = v12 & 0xFFFFFFFE;
LABEL_31:
    if ( v20 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
      GreReleaseSemaphoreInternal(_ghsemGreLock);
    }
    return 0;
  }
LABEL_26:
  v13 = *((_DWORD *)this + 10);
  if ( (v13 & 0x1000) != 0 )
  {
    if ( ((unsigned int)&loc_80000 & *((_DWORD *)*v4 + 6)) != 0 )
    {
      if ( *((_DWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
        v13 = *((_DWORD *)this + 10);
      }
      *((_DWORD *)this + 10) = v13 & 0xFFFFFFFE;
      goto LABEL_31;
    }
  }
  else if ( *((_DWORD *)this + 2) )
  {
    goto LABEL_40;
  }
  if ( (*((_BYTE *)*v4 + 24) & 0x10) != 0 && !DC::bCompute(*v4) )
  {
    if ( *((_DWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
    }
    *((_DWORD *)this + 10) &= ~1u;
    goto LABEL_31;
  }
LABEL_40:
  if ( (*((_DWORD *)*v4 + 6) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 10) & 0x1000) == 0 )
      goto LABEL_50;
    if ( !*((_DWORD *)this + 21) )
      DC::vSetRendering(*v4);
    v15 = KeGetCurrentThread();
    v16 = W32GetThreadWin32Thread(v15);
    v19 = v16;
    if ( v16 )
    {
      *(_DWORD *)(v16 + 172) = (char *)this + 48;
      if ( (*((_DWORD *)*v4 + 6) & 0x4000) == 0 )
      {
        *(_DWORD *)(v16 + 180) |= 1u;
        *((_DWORD *)*v4 + 435) = 0;
        GreAcquireSemaphoreSharedInternal(_ghsemVisRgnUniqueness);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", _ghsemVisRgnUniqueness);
        *(_DWORD *)(v19 + 188) = giVisRgnUniqueness;
        EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", _ghsemVisRgnUniqueness);
        GreReleaseSemaphoreInternal(_ghsemVisRgnUniqueness);
      }
    }
  }
  if ( (*((_DWORD *)this + 10) & 0x1000) != 0 && *((_DWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
  }
LABEL_50:
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
    GreReleaseSemaphoreInternal(_ghsemGreLock);
  }
  if ( (*((_DWORD *)this + 10) & 0x1000) != 0 && !DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)v4, 0) )
  {
    *((_DWORD *)this + 10) &= ~1u;
    return 0;
  }
  if ( (*((_DWORD *)this + 10) & 0x801000) != 0 )
    DLODCOBJ::vLockForDPIScaledClipping((DEVLOCKBLTOBJ *)((char *)this + 48), *(HDC *)*v4);
  return 1;
}
