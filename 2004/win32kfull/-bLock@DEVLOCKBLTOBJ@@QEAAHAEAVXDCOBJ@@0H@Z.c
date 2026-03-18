/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C028E3D0 (GrePlgBlt.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C001C188 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C001C244 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C0076604 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0079160 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00EBAA8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00FACFC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C00FADA0 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011B8C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0274238 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029B7CC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  DC **v9; // rsi
  int v10; // ebx
  int v11; // r13d
  unsigned int v12; // r12d
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  DC *v21; // rax
  __int64 v22; // rax
  BOOL v23; // eax
  DC *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  BOOL v27; // eax
  __int64 v28; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r10
  int v35; // edx
  int v36; // r9d
  __int64 v37; // rcx
  struct _KTHREAD *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rbx
  DC *v46; // rcx
  __int64 v47; // rcx
  struct _KTHREAD *v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  int v57; // r13d
  int v58; // edx
  __int64 v59; // rbx
  __int64 v60; // r8
  int v61; // ecx
  DC *v62; // r8
  __int64 v63; // rbx
  unsigned int v64; // r12d
  int v65; // ecx
  __int64 v66; // rdx
  int v67; // ecx
  __int64 v68; // rcx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // eax
  int v79; // ecx
  __int64 v80; // rdx
  __int64 v81; // rbx
  __int64 v82; // r8
  int v83; // ecx
  int v84; // edx
  __int64 v85; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  int v90; // ecx
  __int64 v91; // r8
  __int64 v92; // rcx
  int v93; // edx
  __int64 v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v100; // rcx
  __int64 CurrentThreadProcess; // rax
  int v102; // eax
  __int64 v103; // rax
  int v104; // ebx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rax
  int v108; // ebx
  __int64 v109; // rcx
  __int64 v110; // rax
  DC *v111; // rax
  __int64 v112; // rcx
  int v113; // ebx
  int v114; // ebx
  signed __int32 v115[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v116; // [rsp+60h] [rbp+8h] BYREF
  __int64 v117; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 1;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = **(_QWORD **)a2;
  *((_QWORD *)this + 22) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 18, (HSURF *)this + 17, (unsigned int *)this + 19)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 21, (HSURF *)this + 20, 0LL) )
  {
    return 0LL;
  }
  v9 = (DC **)((char *)this + 80);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v10 = 1;
  v11 = 0;
  if ( *(_QWORD *)a3 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0
    || *(_QWORD *)a2 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
  {
    *((_QWORD *)this + 2) = ghsemDynamicModeChange;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, v6, v7, v8);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 18) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
    {
      GreAcquireSemaphoreSharedInternal(ghsemGreLock, v30, v31, v32);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
      v11 = 1;
    }
    v33 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 )
    {
      v34 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 )
      {
        v35 = *(_DWORD *)(v33 + 36);
        v36 = *(_DWORD *)(v34 + 36);
        if ( ((v36 ^ v35) & 0x200) != 0 )
          v10 = (**(_BYTE **)(v33 + 976) & 1) != 0 && (*(_DWORD *)(v34 + 36) & 0x8000) != 0
             || (**(_BYTE **)(v34 + 976) & 1) != 0 && (v35 & 0x8000) != 0;
        else
          v10 = ((unsigned __int16)v36 & (unsigned __int16)v35 & 0x8200) == 33280;
      }
      v116 = *(_QWORD *)(v33 + 48);
      v10 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v116);
    }
    if ( *(_QWORD *)a2 )
    {
      v117 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      v10 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v117);
    }
  }
  v12 = 11;
  v13 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v13 & 0x200) != 0 )
  {
    if ( (v13 & 0x8000) == 0 || !v10 )
    {
      v94 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 1) = v94;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      v95 = v94;
      if ( v11 && v94 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v95 = *((_QWORD *)this + 1);
        v11 = 0;
      }
      GreAcquireSemaphore(v95);
      v96 = *((_QWORD *)this + 1);
      v97 = 11LL;
      if ( v96 == ghsemGreLock )
        v97 = 2LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v96, v97);
    }
    if ( (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) && !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
        *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn, v87, v88, v89);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v84 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
    if ( (v84 & 0x1000) != 0 && (v84 & 0x4000) == 0 )
      goto LABEL_208;
  }
  v14 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_204;
  v15 = *(_DWORD *)(v14 + 36);
  if ( (v15 & 0x200) != 0 )
  {
    if ( (v15 & 0x8000) == 0 || !v10 )
    {
      v91 = *(_QWORD *)(v14 + 64);
      *(_QWORD *)this = v91;
      *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      v92 = v91;
      if ( v11 && v91 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v92 = *(_QWORD *)this;
        v11 = 0;
      }
      GreAcquireSemaphore(v92);
      if ( *(_QWORD *)this == ghsemGreLock )
        v12 = 2;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v12);
      v93 = *((_DWORD *)this + 18);
      if ( (v93 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
        *((_DWORD *)this + 18) = v93 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 18) |= 0x1000u;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v68)
        || (CurrentProcess = PsGetCurrentProcess(v71, v70, v72),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v100),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v73 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v73 )
        {
          v74 = *v73;
          if ( v74 )
          {
            *(_QWORD *)(v74 + 320) = 0LL;
            *(_QWORD *)(v74 + 312) = 0LL;
          }
        }
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn, v75, v76, v77);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v14 = *(_QWORD *)a2;
    v78 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    if ( (v78 & 0x1000) != 0 && (v78 & 0x4000) == 0 )
    {
LABEL_208:
      v102 = *((_DWORD *)this + 18);
      if ( (v102 & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v102 = *((_DWORD *)this + 18);
      }
      *((_DWORD *)this + 18) = v102 & 0xFFFFFFFE;
      goto LABEL_222;
    }
  }
  if ( v14 )
  {
    v16 = *((_DWORD *)this + 18);
    v17 = v16;
    if ( (v16 & 0x1000) != 0 && (*(_DWORD *)(v14 + 36) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v16 = *((_DWORD *)this + 18);
      }
      *((_DWORD *)this + 18) = v16 & 0xFFFFFFFE;
      goto LABEL_222;
    }
  }
  else
  {
LABEL_204:
    v17 = *((_DWORD *)this + 18);
  }
  if ( (v17 & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v17 = *((_DWORD *)this + 18);
    }
    *((_DWORD *)this + 18) = v17 & 0xFFFFFFFE;
    goto LABEL_222;
  }
  if ( v14
    && ((v17 & 0x1000) != 0 || (*(_DWORD *)(v14 + 36) & 0x200) == 0)
    && (*(_DWORD *)(v14 + 36) & 0x10) != 0
    && !DC::bCompute((DC *)v14) )
  {
    if ( !*((_QWORD *)this + 2) )
      goto LABEL_221;
    goto LABEL_220;
  }
  if ( ((*((_DWORD *)this + 18) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
    && !DC::bCompute(*(DC **)a3) )
  {
    if ( !*((_QWORD *)this + 2) )
    {
LABEL_221:
      *((_DWORD *)this + 18) &= ~1u;
LABEL_222:
      if ( v11 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
LABEL_220:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    goto LABEL_221;
  }
  v18 = *(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
      goto LABEL_25;
    if ( (_DWORD)v18 )
    {
      if ( *((_QWORD *)this + 17) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*(DC **)a2);
      v38 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v37)
        || (v103 = PsGetCurrentProcess(v40, v39, v41),
            v104 = PsGetProcessSessionIdEx(v103),
            v106 = PsGetCurrentThreadProcess(v105),
            v104 == (unsigned int)PsGetProcessSessionIdEx(v106)) )
      {
        v42 = (__int64 *)PsGetThreadWin32Thread(v38);
        if ( v42 )
        {
          v45 = *v42;
          if ( *v42 )
          {
            *(_QWORD *)(v45 + 312) = v9;
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
            {
              *(_DWORD *)(v45 + 328) |= 1u;
              *(_QWORD *)(*(_QWORD *)a2 + 1960LL) = 0LL;
              GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness, v18, v43, v44);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              *(_DWORD *)(v45 + 336) = giVisRgnUniqueness;
              EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
              GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
            }
          }
        }
      }
    }
    v46 = *(DC **)a3;
    if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v46 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 20) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v46);
      v48 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v47)
        || (v107 = PsGetCurrentProcess(v50, v49, v51),
            v108 = PsGetProcessSessionIdEx(v107),
            v110 = PsGetCurrentThreadProcess(v109),
            v108 == (unsigned int)PsGetProcessSessionIdEx(v110)) )
      {
        v52 = (__int64 *)PsGetThreadWin32Thread(v48);
        if ( v52 )
        {
          v53 = *v52;
          if ( v53 )
            *(_QWORD *)(v53 + 320) = a3;
        }
      }
    }
  }
  else if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 18) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_25:
  if ( v11 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  v19 = *((_DWORD *)this + 18);
  if ( (v19 & 0x1000) == 0 )
  {
LABEL_28:
    v20 = *((_DWORD *)this + 18);
    if ( (v20 & 0x1000) == 0 && (v20 & 0x800000) == 0 )
      return 1LL;
    v21 = *v9;
    if ( *v9 )
    {
LABEL_40:
      *((_DWORD *)v21 + 10) |= 2u;
      *((_BYTE *)this + 96) = 1;
      goto LABEL_41;
    }
    LOBYTE(v18) = 1;
    v22 = HmgLockEx(**(_QWORD **)a2, v18, *((unsigned int *)this + 23));
    *v9 = (DC *)v22;
    if ( !v22 )
    {
      if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
        PsGetWin32KFilterSet();
      goto LABEL_38;
    }
    if ( !*((_DWORD *)this + 23) )
    {
LABEL_33:
      if ( (*((_DWORD *)*v9 + 11) & 2) == 0 )
      {
        v23 = XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80));
        if ( !v23 )
          goto LABEL_35;
        *((_DWORD *)*v9 + 11) |= 2u;
        *((_DWORD *)this + 22) = 1;
      }
      v23 = 1;
LABEL_35:
      v24 = *v9;
      if ( v23 )
      {
        if ( (*((_DWORD *)v24 + 130) & 4) != 0 )
          DC::vMarkTransformDirty(v24);
LABEL_38:
        v21 = *v9;
        if ( !*v9 )
          goto LABEL_41;
        *((_BYTE *)this + 97) = 0;
        goto LABEL_40;
      }
      _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
      *v9 = 0LL;
LABEL_41:
      if ( **(_QWORD **)a3 == **(_QWORD **)a2 )
        return 1LL;
      v25 = *((_QWORD *)this + 13);
      if ( v25 )
      {
LABEL_52:
        *(_DWORD *)(v25 + 40) |= 2u;
        *((_BYTE *)this + 120) = 1;
        return 1LL;
      }
      LOBYTE(v18) = 1;
      v26 = HmgLockEx(**(_QWORD **)a3, v18, *((unsigned int *)this + 29));
      *((_QWORD *)this + 13) = v26;
      if ( !v26 )
      {
        if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
          PsGetWin32KFilterSet();
        goto LABEL_50;
      }
      if ( !*((_DWORD *)this + 29) )
      {
LABEL_45:
        if ( (*(_DWORD *)(*((_QWORD *)this + 13) + 44LL) & 2) == 0 )
        {
          v27 = XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 104));
          if ( !v27 )
            goto LABEL_47;
          *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) |= 2u;
          *((_DWORD *)this + 28) = 1;
        }
        v27 = 1;
LABEL_47:
        v28 = *((_QWORD *)this + 13);
        if ( !v27 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v28 + 12));
          *((_QWORD *)this + 13) = 0LL;
          return 1LL;
        }
        if ( (*(_DWORD *)(v28 + 520) & 4) != 0 )
          DC::vMarkTransformDirty((DC *)v28);
LABEL_50:
        v25 = *((_QWORD *)this + 13);
        if ( v25 )
        {
          *((_BYTE *)this + 121) = 0;
          goto LABEL_52;
        }
        return 1LL;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v26 + 48) + 40LL) & 0x8000) != 0 )
      {
        v114 = *(_DWORD *)(v26 + 2096);
        if ( v114 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          goto LABEL_45;
        v26 = *((_QWORD *)this + 13);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
      *((_QWORD *)this + 13) = 0LL;
      return 1LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v22 + 48) + 40LL) & 0x8000) != 0 )
    {
      v113 = *(_DWORD *)(v22 + 2096);
      if ( v113 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_33;
      v22 = (__int64)*v9;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v22 + 12));
    *v9 = 0LL;
    goto LABEL_41;
  }
  v54 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
    v54 = *(_QWORD *)(v54 + 496);
  v55 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    v56 = *(_QWORD *)(v55 + 496);
  else
    v56 = 0LL;
  v57 = 0;
  if ( !v54 || !v56 )
  {
LABEL_158:
    if ( v55 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
      v57 = 1;
    if ( (!*(_QWORD *)a2 || **(_QWORD **)a2 != **(_QWORD **)a3)
      && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v54, 0) )
    {
      goto LABEL_238;
    }
    goto LABEL_134;
  }
  if ( v54 < v56 )
  {
    v79 = 1;
    *((_DWORD *)this + 18) = v19 | 0x8000;
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
    {
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 104), **(HDC **)a3);
      v85 = *((_QWORD *)this + 13);
      if ( v85 && *((_BYTE *)this + 121) )
      {
        v90 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
        if ( (v90 & 1) != 0 && (v90 & 0x4000) == 0 && *((_QWORD *)this + 16) && !*((_QWORD *)this + 20) )
        {
          *(_DWORD *)(v85 + 36) |= 0x4000u;
          DC::pSurface(*((DC **)this + 13), *((struct SURFACE **)this + 16));
          *((_DWORD *)this + 18) |= 0x20u;
        }
        if ( (unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v85) )
        {
LABEL_129:
          _InterlockedOr(v115, 0);
          v80 = *(_QWORD *)a2;
          v65 = 1;
          if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
          {
            v81 = *(_QWORD *)(v80 + 48);
            XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v80);
            v82 = *(_QWORD *)(v81 + 1408);
            if ( *v9 && *((_BYTE *)this + 97) )
            {
              v83 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
              if ( (v83 & 1) != 0 && (v83 & 0x4000) == 0 && v82 && !*((_QWORD *)this + 17) )
              {
                *((_DWORD *)*v9 + 9) |= 0x4000u;
                DC::pSurface(*v9, (struct SURFACE *)(v82 - 24));
                *((_DWORD *)this + 18) |= 0x10u;
              }
              if ( !DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
              {
                v111 = *v9;
LABEL_237:
                *((_DWORD *)v111 + 11) |= 1u;
                goto LABEL_238;
              }
LABEL_134:
              if ( !v57 )
              {
                v18 = *(_QWORD *)a3;
                if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) == 0
                  || !*(_QWORD *)(*(_QWORD *)a2 + 496LL)
                  || !*(_QWORD *)this )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) == 0
                    || !*(_QWORD *)(v18 + 496)
                    || !*((_QWORD *)this + 1) )
                  {
                    goto LABEL_28;
                  }
                  *((_QWORD *)this + 8) = a3;
                  *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL);
                  if ( bCopySurface(
                         (DEVLOCKBLTOBJ *)((char *)this + 40),
                         (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 24LL)) )
                  {
                    hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL);
                    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
                    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
                    v18 = *((_QWORD *)this + 2);
                    *((_QWORD *)this + 1) = 0LL;
                    *((_QWORD *)this + 4) = 0LL;
                    if ( v18 )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v18);
                      GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
                      *((_QWORD *)this + 2) = 0LL;
                    }
                    goto LABEL_28;
                  }
                  v112 = *((_QWORD *)this + 5);
                  if ( v112 )
                  {
                    DEC_SHARE_REF_CNT(v112);
                    bDeleteSurface(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL));
                    *((_QWORD *)this + 5) = 0LL;
                  }
                  *((_QWORD *)this + 7) = 0LL;
                  *((_QWORD *)this + 8) = 0LL;
                }
              }
              goto LABEL_238;
            }
            v65 = 0;
          }
          *v9 = 0LL;
          goto LABEL_151;
        }
        *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) |= 1u;
LABEL_233:
        v57 = 1;
        goto LABEL_129;
      }
      v79 = 0;
    }
    *((_QWORD *)this + 13) = 0LL;
    if ( v79 )
      goto LABEL_129;
    goto LABEL_233;
  }
  if ( v54 == v56 )
    goto LABEL_158;
  v58 = 1;
  if ( (*(_DWORD *)(v55 + 36) & 0x200) == 0 )
    goto LABEL_176;
  v59 = *(_QWORD *)(v55 + 48);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v55);
  v60 = *(_QWORD *)(v59 + 1408);
  if ( !*v9 || !*((_BYTE *)this + 97) )
  {
    v58 = 0;
LABEL_176:
    *v9 = 0LL;
    if ( !v58 )
      goto LABEL_245;
    goto LABEL_109;
  }
  v61 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v61 & 1) != 0 && (v61 & 0x4000) == 0 && v60 && !*((_QWORD *)this + 17) )
  {
    *((_DWORD *)*v9 + 9) |= 0x4000u;
    DC::pSurface(*v9, (struct SURFACE *)(v60 - 24));
    *((_DWORD *)this + 18) |= 0x10u;
  }
  v62 = *v9;
  if ( !*v9 )
    goto LABEL_109;
  if ( !*((_BYTE *)this + 97) )
    goto LABEL_109;
  if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
    goto LABEL_109;
  v63 = *((_QWORD *)v62 + 62);
  if ( !v63 )
    goto LABEL_109;
  v64 = SURFACE::Map(*((_QWORD *)v62 + 62), this, v62);
  if ( v64 <= 1 )
  {
    if ( (*(_DWORD *)(v63 + 112) & 0x800) != 0
      && *(_QWORD *)(v63 + 248)
      && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80)) )
    {
      *((_DWORD *)this + 18) |= 0x400u;
    }
    if ( (*(_DWORD *)(v63 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 80)) )
      *((_DWORD *)this + 18) |= 0x2000u;
    if ( v64 == 1 )
      *((_DWORD *)this + 18) |= 0x40u;
    goto LABEL_109;
  }
  if ( v64 == 2 )
  {
    *((_DWORD *)*v9 + 11) |= 1u;
LABEL_245:
    v57 = 1;
  }
LABEL_109:
  _InterlockedOr(v115, 0);
  v65 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 104), **(HDC **)a3);
    v66 = *((_QWORD *)this + 13);
    if ( v66 && *((_BYTE *)this + 121) )
    {
      v67 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
      if ( (v67 & 1) != 0 && (v67 & 0x4000) == 0 && *((_QWORD *)this + 16) && !*((_QWORD *)this + 20) )
      {
        *(_DWORD *)(v66 + 36) |= 0x4000u;
        DC::pSurface(*((DC **)this + 13), *((struct SURFACE **)this + 16));
        *((_DWORD *)this + 18) |= 0x20u;
      }
      if ( (unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v66) )
        goto LABEL_134;
      v111 = (DC *)*((_QWORD *)this + 13);
      goto LABEL_237;
    }
    v65 = 0;
  }
  *((_QWORD *)this + 13) = 0LL;
LABEL_151:
  if ( v65 )
    goto LABEL_134;
LABEL_238:
  *((_DWORD *)this + 18) &= ~1u;
  return 0LL;
}
