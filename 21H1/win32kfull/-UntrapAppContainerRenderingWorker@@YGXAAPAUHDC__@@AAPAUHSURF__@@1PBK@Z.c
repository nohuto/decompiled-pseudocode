/*
 * XREFs of ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78
 * Callers:
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 *     _UntrapAppContainerRenderingWrap@16 @ 0x5DBDE (_UntrapAppContainerRenderingWrap@16.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QAEXXZ @ 0x1D87A2 (-vDestructorNULL@DEVLOCKOBJ@@QAEXXZ.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vClearRendering@DC@@QAEXXZ @ 0x5FB80 (-vClearRendering@DC@@QAEXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QAE@XZ @ 0xAB032 (--0DCVISRGNSHARELOCK@@QAE@XZ.c)
 */

void __userpurge UntrapAppContainerRenderingWorker(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        HDC *a3,
        HSURF *a4,
        HSURF *a5,
        const unsigned int *a6)
{
  int v7; // edx
  HSURF *v8; // eax
  int v9; // edx
  HSURF *v10; // edi
  struct SURFACE *v11; // esi
  HSURF v12; // ebx
  _DWORD *v13; // esi
  int v14; // eax
  _DWORD *v15; // esi
  int v16; // eax
  HDC v17; // [esp-4h] [ebp-24h]
  DC *v18[3]; // [esp+Ch] [ebp-14h] BYREF
  _DWORD *v19; // [esp+18h] [ebp-8h]
  _DWORD *v20; // [esp+1Ch] [ebp-4h]
  char v21; // [esp+2Bh] [ebp+Bh]

  v20 = a1;
  v19 = a2;
  if ( *a1 )
  {
    v17 = (HDC)*a2;
    v18[1] = 0;
    v18[2] = 0;
    XDCOBJ::vLock((XDCOBJ *)v18, v17);
    LOBYTE(v7) = 5;
    v8 = (HSURF *)HmgShareLock(*a3, v7);
    LOBYTE(v9) = 5;
    v10 = v8;
    v11 = (struct SURFACE *)HmgShareLock(*a1, v9);
    v12 = *v10;
    DC::pSurface(v18[0], v11);
    DEC_SHARE_REF_CNT(v10);
    DEC_SHARE_REF_CNT(v11);
    GreDereferenceObject(v12, 1);
    *v19 = 0;
    *a3 = 0;
    if ( a4 )
      *((_DWORD *)v18[0] + 6) |= (unsigned int)*a4;
    if ( (*((_DWORD *)v18[0] + 6) & 0x200) != 0 )
    {
      v21 = 0;
      if ( !GreGetLockCount() && !GreIsSemaphoreOwnedOrSharedByCurrentThread(_ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(_ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", _ghsemGreLock);
        v21 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&a4 + 3));
      v15 = v20;
      v16 = HmgShareUnlockRemoveObject(*v20, 0, 0, 0, 5);
      if ( v16 )
        SURFACE::bDeleteSurface(v16, 0, 1);
      *((_DWORD *)v18[0] + 127) = 0;
      DC::vClearRendering(v18[0]);
      *v15 = 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
      if ( v21 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
        GreReleaseSemaphoreInternal(_ghsemGreLock);
      }
    }
    else
    {
      v13 = v20;
      v14 = HmgShareUnlockRemoveObject(*v20, 0, 0, 0, 5);
      if ( v14 )
        SURFACE::bDeleteSurface(v14, 0, 1);
      *((_DWORD *)v18[0] + 127) = 0;
      *v13 = 0;
    }
    if ( v18[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v18);
    v18[0] = 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
}
