/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0
 * Callers:
 *     GreGradientFill @ 0x1C0097F44 (GreGradientFill.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00AA350 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C013AA94 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C014B4C0 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C028CF70 (GrePlgBlt.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C00936F4 (GreDereferenceObject.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A4A38 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A5C40 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00A7490 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00F42A0 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00F5048 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C0117058 (--1CAutoTGO@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011C2B0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012CEF8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0141F4C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z @ 0x1C015D280 (-TmpSrcThreadCleanup@DEVLOCKBLTOBJ@@SAXPEAX@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029A64C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029CF84 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this, __int64 a2, SURFACE **a3)
{
  int v3; // eax
  struct XDCOBJ *v5; // rbx
  int v6; // eax
  SURFACE **v7; // rcx
  SURFACE **v8; // rcx
  int v9; // edx
  _QWORD **v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  DC **v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 CurrentProcess; // rax
  DC **v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rax
  DC *v31; // rax
  DC *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  int ProcessSessionId; // ebx
  __int64 v48; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rdx
  HDC v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  HSURF *v59; // rdi
  struct SURFACE *v60; // rax
  HSURF v61; // rsi
  struct SURFACE *v62; // rbx
  char v63; // bl
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  HDC v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  HSURF *v72; // rdi
  struct SURFACE *v73; // rax
  HSURF v74; // rsi
  struct SURFACE *v75; // rbx
  DC *v76; // rax
  char v77; // bl
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  char *v82; // rbx
  __int64 v83; // rax
  __int64 *v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 *v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rdi
  signed __int32 v91[8]; // [rsp+0h] [rbp-80h] BYREF
  int v92; // [rsp+20h] [rbp-60h]
  int v93; // [rsp+30h] [rbp-50h] BYREF
  int v94; // [rsp+34h] [rbp-4Ch] BYREF
  int v95; // [rsp+38h] [rbp-48h] BYREF
  DC *v96[2]; // [rsp+40h] [rbp-40h] BYREF
  DC *v97[3]; // [rsp+50h] [rbp-30h] BYREF
  char v98; // [rsp+B0h] [rbp+30h] BYREF
  char v99; // [rsp+B8h] [rbp+38h] BYREF
  int v100; // [rsp+C0h] [rbp+40h] BYREF
  int v101; // [rsp+C8h] [rbp+48h] BYREF

  v3 = *((_DWORD *)this + 28);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x8000) != 0 )
    {
      v5 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 137) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
      _InterlockedOr(v91, 0);
      if ( *((_QWORD *)this + 18) && *((_BYTE *)this + 161) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      if ( *((_QWORD *)this + 18) && *((_BYTE *)this + 161) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      _InterlockedOr(v91, 0);
      v5 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 137) )
      {
        v6 = *((_DWORD *)this + 28);
        if ( (v6 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120));
          *((_DWORD *)this + 28) &= ~0x400u;
          v6 = *((_DWORD *)this + 28);
        }
        if ( (v6 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120));
          *((_DWORD *)this + 28) &= ~0x2000u;
          v6 = *((_DWORD *)this + 28);
        }
        if ( (v6 & 0x1000) != 0 )
        {
          a3 = *(SURFACE ***)v5;
          v7 = *(SURFACE ***)v5;
          if ( (*(_DWORD *)(*(_QWORD *)v5 + 44LL) & 1) == 0 && a3[62] )
          {
            SURFACE::bUnMap(a3[62], this, (struct DC *)a3);
            v7 = *(SURFACE ***)v5;
          }
          *((_DWORD *)v7 + 11) &= ~1u;
        }
      }
    }
    v8 = *(SURFACE ***)v5;
    if ( *(_QWORD *)v5 )
    {
      if ( *((_BYTE *)v5 + 17) )
      {
        v9 = *((_DWORD *)this + 28);
        if ( (v9 & 0x1000) != 0 && (*((_DWORD *)v8 + 9) & 0x4000) != 0 && v8[59] && *((_DWORD *)v8 + 122) )
          GreUpdateSpriteDevLockEnd(v5, v9 & 0x400000);
      }
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    CAutoTGO::~CAutoTGO((DEVLOCKBLTOBJ *)((char *)this + 56));
    DEVLOCKBLTOBJ::TmpSrcThreadCleanup(0LL);
    v10 = (_QWORD **)*((_QWORD *)this + 13);
    if ( *v10 )
      hbmSelectBitmap(**v10, *((_QWORD *)this + 12), 1LL, 0LL);
    v11 = *((_QWORD *)this + 5);
    if ( v11 )
    {
      DEC_SHARE_REF_CNT(v11);
      v11 = *((_QWORD *)this + 5);
    }
    bDeleteSurface(*(_QWORD *)(v11 + 32));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  v12 = *((_DWORD *)this + 28);
  if ( (v12 & 0x1000) != 0 )
  {
    if ( (v12 & 0x8000) != 0 )
    {
      v13 = *((_QWORD *)this + 15);
      if ( v13 && *((_BYTE *)this + 137) )
      {
        v14 = *(_QWORD *)(v13 + 48);
        if ( (v12 & 0x10) != 0 )
        {
          *(_DWORD *)(v13 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v14 + 2552));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        v15 = *((_QWORD *)this + 15);
        if ( v15 )
        {
          if ( *((_BYTE *)this + 136) )
          {
            *(_DWORD *)(v15 + 40) &= ~2u;
            v15 = *((_QWORD *)this + 15);
            *((_BYTE *)this + 136) = 0;
          }
          if ( v15 )
          {
            v16 = (__int64 *)v15;
            if ( *((_DWORD *)this + 32) && (*(_DWORD *)(v15 + 44) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120));
              *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~2u;
              v16 = (__int64 *)*((_QWORD *)this + 15);
              *((_DWORD *)this + 32) = 0;
            }
            v17 = *((unsigned int *)this + 33);
            v100 = 0;
            v18 = *v16;
            HmgDecrementExclusiveReferenceCountEx(v16, v17, &v100);
            if ( v100 )
              bDeleteDCInternalEx(v18, 0LL);
          }
        }
        *((_QWORD *)this + 15) = 0LL;
      }
      _InterlockedOr(v91, 0);
      v19 = (DC **)((char *)this + 144);
      v20 = *((_QWORD *)this + 18);
      if ( v20 && *((_BYTE *)this + 161) )
      {
        v21 = *(_QWORD *)(v20 + 48);
        if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
        {
          *(_DWORD *)(v20 + 36) &= ~0x4000u;
          DC::pSurface(*v19, *(struct SURFACE **)(v21 + 2552));
        }
        v22 = *((_QWORD *)this + 21);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 72);
          CurrentProcess = PsGetCurrentProcess(v20, v21, a3);
          MmUnmapViewOfSection(CurrentProcess, v23);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 144));
        DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 144));
        *v19 = 0LL;
      }
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      v25 = (DC **)((char *)this + 144);
      v26 = *((_QWORD *)this + 18);
      if ( v26 && *((_BYTE *)this + 161) )
      {
        v27 = *(_QWORD *)(v26 + 48);
        if ( (v12 & 0x20) != 0 )
        {
          *(_DWORD *)(v26 + 36) &= ~0x4000u;
          DC::pSurface(*v25, *(struct SURFACE **)(v27 + 2552));
        }
        v28 = *((_QWORD *)this + 21);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 72);
          v30 = PsGetCurrentProcess(v26, v27, a3);
          MmUnmapViewOfSection(v30, v29);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 144));
        v31 = *v25;
        if ( *v25 )
        {
          if ( *((_BYTE *)this + 160) )
          {
            *((_DWORD *)v31 + 10) &= ~2u;
            v31 = *v25;
            *((_BYTE *)this + 160) = 0;
          }
          if ( v31 )
          {
            v32 = v31;
            if ( *((_DWORD *)this + 38) && (*((_DWORD *)v31 + 11) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 144));
              *((_DWORD *)*v25 + 11) &= ~2u;
              v32 = *v25;
              *((_DWORD *)this + 38) = 0;
            }
            v33 = *((unsigned int *)this + 39);
            v101 = 0;
            v34 = *(_QWORD *)v32;
            HmgDecrementExclusiveReferenceCountEx(v32, v33, &v101);
            if ( v101 )
              bDeleteDCInternalEx(v34, 0LL);
          }
        }
        *v25 = 0LL;
      }
      _InterlockedOr(v91, 0);
      v35 = *((_QWORD *)this + 15);
      if ( v35 && *((_BYTE *)this + 137) )
      {
        v36 = *(_QWORD *)(v35 + 48);
        if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
        {
          *(_DWORD *)(v35 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v36 + 2552));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        v37 = *((_QWORD *)this + 15);
        if ( v37 )
        {
          if ( *((_BYTE *)this + 136) )
          {
            *(_DWORD *)(v37 + 40) &= ~2u;
            v37 = *((_QWORD *)this + 15);
            *((_BYTE *)this + 136) = 0;
          }
          if ( v37 )
          {
            v38 = (__int64 *)v37;
            if ( *((_DWORD *)this + 32) && (*(_DWORD *)(v37 + 44) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120));
              *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~2u;
              v38 = (__int64 *)*((_QWORD *)this + 15);
              *((_DWORD *)this + 32) = 0;
            }
            v39 = *((unsigned int *)this + 33);
            v93 = 0;
            v40 = *v38;
            HmgDecrementExclusiveReferenceCountEx(v38, v39, &v93);
            if ( v93 )
              bDeleteDCInternalEx(v40, 0LL);
          }
        }
        *((_QWORD *)this + 15) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v42)
      || (v46 = PsGetCurrentProcess(v44, v43, v45),
          ProcessSessionId = PsGetProcessSessionIdEx(v46),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v48),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v51 = *ThreadWin32Thread;
        if ( v51 )
        {
          *(_QWORD *)(v51 + 320) = 0LL;
          *(_QWORD *)(v51 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v12 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v52 = *((_QWORD *)this + 1);
  if ( v52 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v52);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v53 = *((_DWORD *)this + 28);
  if ( (v53 & 8) != 0 )
    *((_DWORD *)this + 28) = v53 & 0xFFFFFFF7;
  v54 = *((_QWORD *)this + 2);
  if ( v54 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v54);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 23) )
  {
    v55 = (HDC)*((_QWORD *)this + 24);
    v96[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v96, v55);
    LOBYTE(v56) = 5;
    v57 = HmgShareLock(*((_QWORD *)this + 22), v56);
    LOBYTE(v58) = 5;
    v59 = (HSURF *)v57;
    v60 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 23), v58);
    v61 = *v59;
    v62 = v60;
    DC::pSurface(v96[0], v60);
    DEC_SHARE_REF_CNT(v59);
    DEC_SHARE_REF_CNT(v62);
    GreDereferenceObject(v61, 1u);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-116LL )
      *((_DWORD *)v96[0] + 9) |= *((_DWORD *)this + 29);
    if ( (*((_DWORD *)v96[0] + 9) & 0x200) != 0 )
    {
      v63 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v63 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v98);
      v64 = *((_QWORD *)this + 23);
      LOBYTE(v92) = 5;
      v65 = HmgShareUnlockRemoveObject(v64, 0LL, 0LL, 0LL, v92);
      if ( v65 )
        SURFACE::bDeleteSurface(v65, 0LL, 1LL);
      *((_QWORD *)v96[0] + 63) = 0LL;
      DC::vClearRendering(v96[0]);
      *((_QWORD *)this + 23) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v63 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v66 = *((_QWORD *)this + 23);
      LOBYTE(v92) = 5;
      v67 = HmgShareUnlockRemoveObject(v66, 0LL, 0LL, 0LL, v92);
      if ( v67 )
        SURFACE::bDeleteSurface(v67, 0LL, 1LL);
      *((_QWORD *)v96[0] + 63) = 0LL;
      *((_QWORD *)this + 23) = 0LL;
    }
    if ( v96[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v96);
    v96[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  if ( *((_QWORD *)this + 26) )
  {
    v68 = (HDC)*((_QWORD *)this + 27);
    v97[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v97, v68);
    LOBYTE(v69) = 5;
    v70 = HmgShareLock(*((_QWORD *)this + 25), v69);
    LOBYTE(v71) = 5;
    v72 = (HSURF *)v70;
    v73 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 26), v71);
    v74 = *v72;
    v75 = v73;
    DC::pSurface(v97[0], v73);
    DEC_SHARE_REF_CNT(v72);
    DEC_SHARE_REF_CNT(v75);
    GreDereferenceObject(v74, 1u);
    v76 = v97[0];
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    if ( (*((_DWORD *)v76 + 9) & 0x200) != 0 )
    {
      v77 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v77 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v99);
      v78 = *((_QWORD *)this + 26);
      LOBYTE(v92) = 5;
      v79 = HmgShareUnlockRemoveObject(v78, 0LL, 0LL, 0LL, v92);
      if ( v79 )
        SURFACE::bDeleteSurface(v79, 0LL, 1LL);
      *((_QWORD *)v97[0] + 63) = 0LL;
      DC::vClearRendering(v97[0]);
      *((_QWORD *)this + 26) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v77 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v80 = *((_QWORD *)this + 26);
      LOBYTE(v92) = 5;
      v81 = HmgShareUnlockRemoveObject(v80, 0LL, 0LL, 0LL, v92);
      if ( v81 )
        SURFACE::bDeleteSurface(v81, 0LL, 1LL);
      *((_QWORD *)v97[0] + 63) = 0LL;
      *((_QWORD *)this + 26) = 0LL;
    }
    if ( v97[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v97);
    v97[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  v82 = (char *)this + 144;
  v83 = *((_QWORD *)this + 18);
  if ( v83 )
  {
    if ( *((_BYTE *)this + 160) )
    {
      *(_DWORD *)(v83 + 40) &= ~2u;
      v83 = *(_QWORD *)v82;
      *((_BYTE *)this + 160) = 0;
    }
    if ( v83 )
    {
      v84 = (__int64 *)v83;
      if ( *((_DWORD *)this + 38) && (*(_DWORD *)(v83 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 144));
        *(_DWORD *)(*(_QWORD *)v82 + 44LL) &= ~2u;
        v84 = *(__int64 **)v82;
        *((_DWORD *)this + 38) = 0;
      }
      v85 = *((unsigned int *)this + 39);
      v94 = 0;
      v86 = *v84;
      HmgDecrementExclusiveReferenceCountEx(v84, v85, &v94);
      if ( v94 )
        bDeleteDCInternalEx(v86, 0LL);
    }
    *(_QWORD *)v82 = 0LL;
  }
  v87 = *((_QWORD *)this + 15);
  if ( v87 )
  {
    if ( *((_BYTE *)this + 136) )
    {
      *(_DWORD *)(v87 + 40) &= ~2u;
      v87 = *((_QWORD *)this + 15);
      *((_BYTE *)this + 136) = 0;
    }
    if ( v87 )
    {
      v88 = (__int64 *)v87;
      if ( *((_DWORD *)this + 32) && (*(_DWORD *)(v87 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120));
        *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~2u;
        v88 = (__int64 *)*((_QWORD *)this + 15);
        *((_DWORD *)this + 32) = 0;
      }
      v89 = *((unsigned int *)this + 33);
      v95 = 0;
      v90 = *v88;
      HmgDecrementExclusiveReferenceCountEx(v88, v89, &v95);
      if ( v95 )
        bDeleteDCInternalEx(v90, 0LL);
    }
    *((_QWORD *)this + 15) = 0LL;
  }
  CAutoTGO::~CAutoTGO((DEVLOCKBLTOBJ *)((char *)this + 56));
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
