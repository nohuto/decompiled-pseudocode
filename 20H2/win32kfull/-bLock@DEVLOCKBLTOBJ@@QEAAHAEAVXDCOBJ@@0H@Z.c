/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30
 * Callers:
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00AA350 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C014B4C0 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C028CF70 (GrePlgBlt.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0097BA0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0097C5C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00A1674 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00B4DE0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00E80F8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00F4C9C (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C00F4D44 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011C2B0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C026CB88 (-pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0272C28 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C0272EC4 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029A37C (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  DC **v6; // rsi
  int v7; // ebx
  DC **v8; // r14
  int v9; // ebp
  __int64 v10; // r10
  __int64 v11; // r9
  int v12; // r8d
  int v13; // edx
  bool v14; // zf
  unsigned int v15; // r15d
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rax
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  __int64 result; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rbx
  DC *v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  int v41; // ebp
  DC *v42; // rdx
  int v43; // ecx
  __int64 v44; // rdx
  int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // r8
  int v48; // ecx
  bool v49; // zf
  __int64 v50; // rbx
  __int64 v51; // r8
  int v52; // ecx
  DC *v53; // r8
  __int64 v54; // rbx
  unsigned int v55; // eax
  unsigned int v56; // ebp
  int v57; // ecx
  int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rbx
  int v61; // eax
  DC *v62; // rax
  DC *v63; // rax
  int v64; // ebx
  int v65; // eax
  DC *v66; // rcx
  DC *v67; // rax
  DC *v68; // rax
  int v69; // ebx
  int v70; // eax
  DC *v71; // rcx
  signed __int32 v72[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v73; // [rsp+60h] [rbp+8h] BYREF
  __int64 v74; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = **(_QWORD **)a2;
  *((_QWORD *)this + 27) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 23, (HSURF *)this + 22, (unsigned int *)this + 29)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 26, (HSURF *)this + 25, 0LL) )
  {
    return 0LL;
  }
  v6 = (DC **)((char *)this + 120);
  v7 = 1;
  v8 = (DC **)((char *)this + 144);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v9 = 0;
  if ( (!*(_QWORD *)a3 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) )
  {
    goto LABEL_27;
  }
  *((_QWORD *)this + 2) = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    v9 = 1;
  }
  v10 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    v11 = *(_QWORD *)a2;
    if ( !*(_QWORD *)a2 )
    {
LABEL_24:
      v73 = *(_QWORD *)(v10 + 48);
      v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v73);
      goto LABEL_25;
    }
    v12 = *(_DWORD *)(v10 + 36);
    v13 = *(_DWORD *)(v11 + 36);
    if ( ((v13 ^ v12) & 0x200) != 0 )
    {
      if ( (**(_DWORD **)(v10 + 976) & 1) != 0 && (v13 & 0x8000) != 0 )
        goto LABEL_22;
      if ( (**(_DWORD **)(v11 + 976) & 1) == 0 )
      {
LABEL_23:
        v7 = 0;
        goto LABEL_24;
      }
      v14 = (v12 & 0x8000) == 0;
    }
    else
    {
      if ( (v12 & 0x200) == 0 || (v13 & 0x200) == 0 || (v12 & 0x8000) == 0 )
        goto LABEL_23;
      v14 = (*(_DWORD *)(v11 + 36) & 0x8000) == 0;
    }
    if ( !v14 )
    {
LABEL_22:
      v7 = 1;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_25:
  if ( *(_QWORD *)a2 )
  {
    v74 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v74);
  }
LABEL_27:
  v15 = 2;
  v16 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v16 & 0x200) != 0 )
  {
    if ( (v16 & 0x8000) == 0 || !v7 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 1) = v17;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      v18 = v17;
      if ( v9 && v17 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v18 = *((_QWORD *)this + 1);
        v9 = 0;
      }
      GreAcquireSemaphore(v18);
      v19 = *((_QWORD *)this + 1);
      v20 = 2LL;
      if ( v19 != ghsemGreLock )
        v20 = 11LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v19, v20);
    }
    if ( (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) && !(unsigned int)GreGetLockCount() )
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
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000) == 0x1000 )
      goto LABEL_60;
  }
  v22 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_64;
  v23 = *(_DWORD *)(v22 + 36);
  if ( (v23 & 0x200) != 0 )
  {
    if ( (v23 & 0x8000) == 0 || !v7 )
    {
      v24 = *(_QWORD *)(v22 + 64);
      *(_QWORD *)this = v24;
      *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      v25 = v24;
      if ( v9 && v24 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v25 = *(_QWORD *)this;
        v9 = 0;
      }
      GreAcquireSemaphore(v25);
      if ( *(_QWORD *)this != ghsemGreLock )
        v15 = 11;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v15);
      v26 = *((_DWORD *)this + 28);
      if ( (v26 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
        *((_DWORD *)this + 28) = v26 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      v27 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v27 )
      {
        *(_QWORD *)(v27 + 320) = 0LL;
        *(_QWORD *)(v27 + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v22 = *(_QWORD *)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
    {
LABEL_60:
      v28 = *((_DWORD *)this + 28);
      if ( (v28 & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v28 = *((_DWORD *)this + 28);
      }
      *((_DWORD *)this + 28) = v28 & 0xFFFFFFFE;
LABEL_87:
      if ( v9 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
  }
  if ( v22 )
  {
    v30 = *((_DWORD *)this + 28);
    v29 = v30;
    if ( (v30 & 0x1000) != 0 && (*(_DWORD *)(v22 + 36) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v30 = *((_DWORD *)this + 28);
      }
      *((_DWORD *)this + 28) = v30 & 0xFFFFFFFE;
      goto LABEL_87;
    }
  }
  else
  {
LABEL_64:
    v29 = *((_DWORD *)this + 28);
  }
  if ( (v29 & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v29 = *((_DWORD *)this + 28);
    }
    *((_DWORD *)this + 28) = v29 & 0xFFFFFFFE;
    goto LABEL_87;
  }
  if ( v22
    && ((v29 & 0x1000) != 0 || (*(_DWORD *)(v22 + 36) & 0x200) == 0)
    && (*(_DWORD *)(v22 + 36) & 0x10) != 0
    && !DC::bCompute((DC *)v22)
    || ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
    && !DC::bCompute(*(DC **)a3) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
    *((_DWORD *)this + 28) &= ~1u;
    goto LABEL_87;
  }
  v32 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_112;
    if ( (_DWORD)v32 )
    {
      if ( *((_QWORD *)this + 22) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*(DC **)a2);
      v33 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v34 = v33;
      if ( v33 )
      {
        *(_QWORD *)(v33 + 312) = v6;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
        {
          *(_DWORD *)(v33 + 328) |= 1u;
          *(_QWORD *)(*(_QWORD *)a2 + 1960LL) = 0LL;
          GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
          *(_DWORD *)(v34 + 336) = giVisRgnUniqueness;
          EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
          GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
        }
      }
    }
    v35 = *(DC **)a3;
    if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v35 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 25) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v35);
      v36 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v36 )
        *(_QWORD *)(v36 + 320) = a3;
    }
  }
  else if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_112:
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  v37 = *((_DWORD *)this + 28);
  if ( (v37 & 0x1000) == 0 )
    goto LABEL_211;
  if ( *(_QWORD *)a3 )
    v38 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v38 = 0LL;
  v39 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    v40 = *(_QWORD *)(v39 + 496);
  else
    v40 = 0LL;
  v41 = 0;
  if ( v38 && v40 && v38 != v40 )
  {
    if ( v38 < v40 )
    {
      *((_DWORD *)this + 28) = v37 | 0x8000;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 144), **(HDC **)a3);
        v42 = *v8;
        if ( *v8 && *((_BYTE *)this + 161) )
        {
          v43 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v43 & 1) != 0 && (v43 & 0x4000) == 0 && *((_QWORD *)this + 21) && !*((_QWORD *)this + 25) )
          {
            *((_DWORD *)v42 + 9) |= 0x4000u;
            DC::pSurface(*v8, *((struct SURFACE **)this + 21));
            *((_DWORD *)this + 28) |= 0x20u;
          }
          if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, (int)v42) )
          {
            v41 = 1;
            *((_DWORD *)*v8 + 11) |= 1u;
          }
          goto LABEL_137;
        }
        v41 = 1;
      }
      *v8 = 0LL;
LABEL_137:
      _InterlockedOr(v72, 0);
      v44 = *(_QWORD *)a2;
      v45 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
      {
        v46 = *(_QWORD *)(v44 + 48);
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v44);
        v47 = *(_QWORD *)(v46 + 1408);
        if ( *v6 && *((_BYTE *)this + 137) )
        {
          v48 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
          if ( (v48 & 1) != 0 && (v48 & 0x4000) == 0 && v47 && !*((_QWORD *)this + 22) )
          {
            *((_DWORD *)*v6 + 9) |= 0x4000u;
            DC::pSurface(*v6, (struct SURFACE *)(v47 - 24));
            *((_DWORD *)this + 28) |= 0x10u;
          }
          if ( !DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
          {
            *((_DWORD *)*v6 + 11) |= 1u;
LABEL_147:
            *((_DWORD *)this + 28) &= ~1u;
            return 0LL;
          }
          goto LABEL_197;
        }
        v45 = 0;
      }
      *v6 = 0LL;
      v49 = v45 == 0;
      goto LABEL_196;
    }
    if ( (*(_DWORD *)(v39 + 36) & 0x200) != 0 )
    {
      v50 = *(_QWORD *)(v39 + 48);
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v39);
      v51 = *(_QWORD *)(v50 + 1408);
      if ( *v6 && *((_BYTE *)this + 137) )
      {
        v52 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v52 & 1) != 0 && (v52 & 0x4000) == 0 && v51 && !*((_QWORD *)this + 22) )
        {
          *((_DWORD *)*v6 + 9) |= 0x4000u;
          DC::pSurface(*v6, (struct SURFACE *)(v51 - 24));
          *((_DWORD *)this + 28) |= 0x10u;
        }
        v53 = *v6;
        if ( *v6 )
        {
          if ( *((_BYTE *)this + 137) )
          {
            if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
            {
              v54 = *((_QWORD *)v53 + 62);
              if ( v54 )
              {
                v55 = SURFACE::Map(*((_QWORD *)v53 + 62));
                v56 = v55;
                if ( v55 <= 1 )
                {
                  if ( (*(_DWORD *)(v54 + 112) & 0x800) != 0
                    && *(_QWORD *)(v54 + 248)
                    && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                  {
                    *((_DWORD *)this + 28) |= 0x400u;
                  }
                  if ( (*(_DWORD *)(v54 + 112) & 0x10) != 0
                    && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                  {
                    *((_DWORD *)this + 28) |= 0x2000u;
                  }
                  if ( v56 == 1 )
                    *((_DWORD *)this + 28) |= 0x40u;
                }
                else if ( v55 == 2 )
                {
                  v41 = 1;
                  *((_DWORD *)*v6 + 11) |= 1u;
                  goto LABEL_177;
                }
              }
            }
          }
        }
        v41 = 0;
LABEL_177:
        _InterlockedOr(v72, 0);
        v57 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
        {
          XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 144), **(HDC **)a3);
          if ( *v8 && *((_BYTE *)this + 161) )
          {
            v58 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
            if ( (v58 & 1) != 0 && (v58 & 0x4000) == 0 && *((_QWORD *)this + 21) && !*((_QWORD *)this + 25) )
            {
              *((_DWORD *)*v8 + 9) |= 0x4000u;
              DC::pSurface(*v8, *((struct SURFACE **)this + 21));
              *((_DWORD *)this + 28) |= 0x20u;
            }
            if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v58) )
            {
              *((_DWORD *)*v8 + 11) |= 1u;
              *((_DWORD *)this + 28) &= ~1u;
              return 0LL;
            }
            goto LABEL_197;
          }
          v57 = 0;
        }
        *v8 = 0LL;
        if ( !v57 )
        {
          *((_DWORD *)this + 28) &= ~1u;
          return 0LL;
        }
        goto LABEL_197;
      }
      v41 = 1;
    }
    *v6 = 0LL;
    goto LABEL_177;
  }
  if ( v39 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
    v41 = 1;
  if ( !*(_QWORD *)a2 || **(_QWORD **)a2 != **(_QWORD **)a3 )
  {
    v49 = (unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v37, 0) == 0;
LABEL_196:
    if ( v49 )
      goto LABEL_147;
  }
LABEL_197:
  if ( v41 )
    goto LABEL_147;
  v32 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(*(_QWORD *)a2 + 496LL)
    && *(_QWORD *)this )
  {
    goto LABEL_147;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(v32 + 496)
    && *((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 13) = a3;
    *((_QWORD *)this + 12) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL);
    if ( !bCopySurface(
            (DEVLOCKBLTOBJ *)((char *)this + 40),
            (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 24LL)) )
      goto LABEL_147;
    if ( !hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL) )
    {
      v59 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v60 = v59;
      if ( !v59 || *(_QWORD *)(v59 + 384) )
        goto LABEL_147;
      CAutoTGO::vGuard((DEVLOCKBLTOBJ *)((char *)this + 56), 0LL, (void (*)(void *))DEVLOCKBLTOBJ::TmpSrcThreadCleanup);
      *(_QWORD *)(v60 + 384) = SURFMEM::pSurfobj((DEVLOCKBLTOBJ *)((char *)this + 40));
    }
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    v32 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    if ( v32 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v32);
      GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
  }
LABEL_211:
  v61 = *((_DWORD *)this + 28);
  if ( (v61 & 0x1000) == 0 && (v61 & 0x800000) == 0 )
    return 1LL;
  v62 = *v6;
  if ( *v6 )
    goto LABEL_234;
  LOBYTE(v32) = 1;
  v63 = (DC *)HmgLockEx(**(_QWORD **)a2, v32, *((unsigned int *)this + 33));
  *v6 = v63;
  if ( v63 )
  {
    if ( *((_DWORD *)this + 33) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v63 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_219:
        _InterlockedDecrement((volatile signed __int32 *)v63 + 3);
        *v6 = 0LL;
        goto LABEL_235;
      }
      v64 = *((_DWORD *)v63 + 524);
      if ( v64 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v63 = *v6;
        goto LABEL_219;
      }
    }
    if ( (*((_DWORD *)*v6 + 11) & 2) == 0 )
    {
      if ( !XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120)) )
      {
        v65 = 0;
LABEL_225:
        v66 = *v6;
        if ( !v65 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v66 + 3);
          *v6 = 0LL;
          goto LABEL_235;
        }
        if ( (*((_DWORD *)v66 + 130) & 4) != 0 )
          DC::vMarkTransformDirty(v66);
        goto LABEL_232;
      }
      *((_DWORD *)*v6 + 11) |= 2u;
      *((_DWORD *)this + 32) = 1;
    }
    v65 = 1;
    goto LABEL_225;
  }
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    PsGetWin32KFilterSet();
LABEL_232:
  v62 = *v6;
  if ( !*v6 )
    goto LABEL_235;
  *((_BYTE *)this + 137) = 0;
LABEL_234:
  *((_DWORD *)v62 + 10) |= 2u;
  *((_BYTE *)this + 136) = 1;
LABEL_235:
  if ( **(_QWORD **)a3 == **(_QWORD **)a2 )
    return 1LL;
  v67 = *v8;
  if ( *v8 )
  {
LABEL_257:
    *((_DWORD *)v67 + 10) |= 2u;
    *((_BYTE *)this + 160) = 1;
    return 1LL;
  }
  LOBYTE(v32) = 1;
  v68 = (DC *)HmgLockEx(**(_QWORD **)a3, v32, *((unsigned int *)this + 39));
  *v8 = v68;
  if ( !v68 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_255;
  }
  if ( *((_DWORD *)this + 39) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v68 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_242:
      _InterlockedDecrement((volatile signed __int32 *)v68 + 3);
      result = 1LL;
      *v8 = 0LL;
      return result;
    }
    v69 = *((_DWORD *)v68 + 524);
    if ( v69 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v68 = *v8;
      goto LABEL_242;
    }
  }
  if ( (*((_DWORD *)*v8 + 11) & 2) != 0 )
    goto LABEL_247;
  if ( XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 144)) )
  {
    *((_DWORD *)*v8 + 11) |= 2u;
    *((_DWORD *)this + 38) = 1;
LABEL_247:
    v70 = 1;
    goto LABEL_248;
  }
  v70 = 0;
LABEL_248:
  v71 = *v8;
  if ( !v70 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v71 + 3);
    result = 1LL;
    *v8 = 0LL;
    return result;
  }
  if ( (*((_DWORD *)v71 + 130) & 4) != 0 )
    DC::vMarkTransformDirty(v71);
LABEL_255:
  v67 = *v8;
  if ( *v8 )
  {
    *((_BYTE *)this + 161) = 0;
    goto LABEL_257;
  }
  return 1LL;
}
