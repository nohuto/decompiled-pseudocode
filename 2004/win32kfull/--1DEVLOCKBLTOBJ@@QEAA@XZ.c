/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C001967C (GreGradientFill.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0138AC4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C028E3D0 (GrePlgBlt.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00795B8 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C007A780 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00AFA30 (GreDereferenceObject.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FA310 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FAE08 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011B8C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012AF7C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C013FEDC (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029BA9C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029E3D4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this, __int64 a2, SURFACE **a3)
{
  int v3; // eax
  struct XDCOBJ *v5; // rbx
  int v6; // eax
  SURFACE **v7; // rcx
  SURFACE **v8; // rcx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rbx
  HDC v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  HSURF *v56; // rdi
  struct SURFACE *v57; // rax
  HSURF v58; // r14
  struct SURFACE *v59; // rbx
  DC *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // r10
  __int64 v64; // rbx
  __int64 CurrentProcess; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  int ProcessSessionId; // ebx
  __int64 v70; // rcx
  __int64 CurrentThreadProcess; // rax
  HDC v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  HSURF *v76; // rdi
  struct SURFACE *v77; // rax
  HSURF v78; // r14
  struct SURFACE *v79; // rbx
  char v80; // bl
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  char v88; // bl
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // rax
  signed __int32 v94[8]; // [rsp+0h] [rbp-80h] BYREF
  int v95; // [rsp+20h] [rbp-60h]
  int v96; // [rsp+30h] [rbp-50h] BYREF
  int v97; // [rsp+34h] [rbp-4Ch] BYREF
  int v98; // [rsp+38h] [rbp-48h] BYREF
  DC *v99[2]; // [rsp+40h] [rbp-40h] BYREF
  DC *v100[3]; // [rsp+50h] [rbp-30h] BYREF
  char v101; // [rsp+B0h] [rbp+30h] BYREF
  char v102; // [rsp+B8h] [rbp+38h] BYREF
  int v103; // [rsp+C0h] [rbp+40h] BYREF
  int v104; // [rsp+C8h] [rbp+48h] BYREF

  v3 = *((_DWORD *)this + 18);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x8000) != 0 )
    {
      v5 = (DEVLOCKBLTOBJ *)((char *)this + 80);
      if ( *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
      _InterlockedOr(v94, 0);
      if ( *((_QWORD *)this + 13) && *((_BYTE *)this + 121) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      if ( *((_QWORD *)this + 13) && *((_BYTE *)this + 121) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      _InterlockedOr(v94, 0);
      v5 = (DEVLOCKBLTOBJ *)((char *)this + 80);
      if ( *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
      {
        v6 = *((_DWORD *)this + 18);
        if ( (v6 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80));
          *((_DWORD *)this + 18) &= ~0x400u;
          v6 = *((_DWORD *)this + 18);
        }
        if ( (v6 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 80));
          *((_DWORD *)this + 18) &= ~0x2000u;
          v6 = *((_DWORD *)this + 18);
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
        v9 = *((_DWORD *)this + 18);
        if ( (v9 & 0x1000) != 0 && (*((_DWORD *)v8 + 9) & 0x4000) != 0 && v8[59] && *((_DWORD *)v8 + 122) )
          GreUpdateSpriteDevLockEnd(v5, v9 & 0x400000);
      }
    }
  }
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    v63 = (_QWORD *)**((_QWORD **)this + 8);
    if ( v63 )
    {
      hbmSelectBitmap(*v63, *((_QWORD *)this + 7), 1LL, 0LL);
      v10 = *((_QWORD *)this + 5);
    }
    if ( v10 )
    {
      DEC_SHARE_REF_CNT(v10);
      v10 = *((_QWORD *)this + 5);
    }
    bDeleteSurface(*(_QWORD *)(v10 + 32));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v11 = *((_DWORD *)this + 18);
  if ( (v11 & 0x1000) != 0 )
  {
    if ( (v11 & 0x8000) != 0 )
    {
      v43 = *((_QWORD *)this + 10);
      if ( v43 && *((_BYTE *)this + 97) )
      {
        v44 = *(_QWORD *)(v43 + 48);
        if ( (v11 & 0x10) != 0 )
        {
          *(_DWORD *)(v43 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 10), *(struct SURFACE **)(v44 + 2552));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 80));
        v45 = *((_QWORD *)this + 10);
        if ( v45 )
        {
          if ( *((_BYTE *)this + 96) )
          {
            *(_DWORD *)(v45 + 40) &= ~2u;
            v45 = *((_QWORD *)this + 10);
            *((_BYTE *)this + 96) = 0;
          }
          if ( v45 )
          {
            v46 = (__int64 *)v45;
            if ( *((_DWORD *)this + 22) && (*(_DWORD *)(v45 + 44) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80));
              *(_DWORD *)(*((_QWORD *)this + 10) + 44LL) &= ~2u;
              v46 = (__int64 *)*((_QWORD *)this + 10);
              *((_DWORD *)this + 22) = 0;
            }
            v47 = *((unsigned int *)this + 23);
            v103 = 0;
            v48 = *v46;
            HmgDecrementExclusiveReferenceCountEx(v46, v47, &v103);
            if ( v103 )
              bDeleteDCInternalEx(v48, 0LL);
          }
        }
        *((_QWORD *)this + 10) = 0LL;
      }
      _InterlockedOr(v94, 0);
      v49 = *((_QWORD *)this + 13);
      if ( v49 && *((_BYTE *)this + 121) )
      {
        v50 = *(_QWORD *)(v49 + 48);
        if ( (*((_DWORD *)this + 18) & 0x20) != 0 )
        {
          *(_DWORD *)(v49 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 13), *(struct SURFACE **)(v50 + 2552));
        }
        v51 = *((_QWORD *)this + 16);
        if ( v51 )
        {
          v64 = *(_QWORD *)(v51 + 72);
          CurrentProcess = PsGetCurrentProcess(v49, v50, a3);
          MmUnmapViewOfSection(CurrentProcess, v64);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 104));
        DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 104));
        *((_QWORD *)this + 13) = 0LL;
      }
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      v23 = *((_QWORD *)this + 13);
      if ( v23 && *((_BYTE *)this + 121) )
      {
        v24 = *(_QWORD *)(v23 + 48);
        if ( (v11 & 0x20) != 0 )
        {
          *(_DWORD *)(v23 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 13), *(struct SURFACE **)(v24 + 2552));
        }
        v25 = *((_QWORD *)this + 16);
        if ( v25 )
        {
          v66 = *(_QWORD *)(v25 + 72);
          v67 = PsGetCurrentProcess(v23, v24, a3);
          MmUnmapViewOfSection(v67, v66);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 104));
        v26 = *((_QWORD *)this + 13);
        if ( v26 )
        {
          if ( *((_BYTE *)this + 120) )
          {
            *(_DWORD *)(v26 + 40) &= ~2u;
            v26 = *((_QWORD *)this + 13);
            *((_BYTE *)this + 120) = 0;
          }
          if ( v26 )
          {
            v27 = (__int64 *)v26;
            if ( *((_DWORD *)this + 28) && (*(_DWORD *)(v26 + 44) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 104));
              *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) &= ~2u;
              v27 = (__int64 *)*((_QWORD *)this + 13);
              *((_DWORD *)this + 28) = 0;
            }
            v28 = *((unsigned int *)this + 29);
            v104 = 0;
            v29 = *v27;
            HmgDecrementExclusiveReferenceCountEx(v27, v28, &v104);
            if ( v104 )
              bDeleteDCInternalEx(v29, 0LL);
          }
        }
        *((_QWORD *)this + 13) = 0LL;
      }
      _InterlockedOr(v94, 0);
      v30 = *((_QWORD *)this + 10);
      if ( v30 && *((_BYTE *)this + 97) )
      {
        v31 = *(_QWORD *)(v30 + 48);
        if ( (*((_DWORD *)this + 18) & 0x10) != 0 )
        {
          *(_DWORD *)(v30 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 10), *(struct SURFACE **)(v31 + 2552));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 80));
        v32 = *((_QWORD *)this + 10);
        if ( v32 )
        {
          if ( *((_BYTE *)this + 96) )
          {
            *(_DWORD *)(v32 + 40) &= ~2u;
            v32 = *((_QWORD *)this + 10);
            *((_BYTE *)this + 96) = 0;
          }
          if ( v32 )
          {
            v33 = (__int64 *)v32;
            if ( *((_DWORD *)this + 22) && (*(_DWORD *)(v32 + 44) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80));
              *(_DWORD *)(*((_QWORD *)this + 10) + 44LL) &= ~2u;
              v33 = (__int64 *)*((_QWORD *)this + 10);
              *((_DWORD *)this + 22) = 0;
            }
            v34 = *((unsigned int *)this + 23);
            v96 = 0;
            v35 = *v33;
            HmgDecrementExclusiveReferenceCountEx(v33, v34, &v96);
            if ( v96 )
              bDeleteDCInternalEx(v35, 0LL);
          }
        }
        *((_QWORD *)this + 10) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v37)
      || (v68 = PsGetCurrentProcess(v39, v38, v40),
          ProcessSessionId = PsGetProcessSessionIdEx(v68),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v70),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v42 = *ThreadWin32Thread;
        if ( v42 )
        {
          *(_QWORD *)(v42 + 320) = 0LL;
          *(_QWORD *)(v42 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v11 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v12 = *((_QWORD *)this + 1);
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v12);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v13 = *((_DWORD *)this + 18);
  if ( (v13 & 8) != 0 )
    *((_DWORD *)this + 18) = v13 & 0xFFFFFFF7;
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v14);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 18) )
  {
    v72 = (HDC)*((_QWORD *)this + 19);
    v99[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v99, v72);
    LOBYTE(v73) = 5;
    v74 = HmgShareLock(*((_QWORD *)this + 17), v73);
    LOBYTE(v75) = 5;
    v76 = (HSURF *)v74;
    v77 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 18), v75);
    v78 = *v76;
    v79 = v77;
    DC::pSurface(v99[0], v77);
    DEC_SHARE_REF_CNT(v76);
    DEC_SHARE_REF_CNT(v79);
    GreDereferenceObject(v78);
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-76LL )
      *((_DWORD *)v99[0] + 9) |= *((_DWORD *)this + 19);
    if ( (*((_DWORD *)v99[0] + 9) & 0x200) != 0 )
    {
      v80 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock, v81, v82, v83);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v80 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v101);
      v84 = *((_QWORD *)this + 18);
      LOBYTE(v95) = 5;
      v85 = HmgShareUnlockRemoveObject(v84, 0LL, 0LL, 0LL, v95);
      if ( v85 )
        SURFACE::bDeleteSurface(v85, 0LL, 1LL);
      *((_QWORD *)v99[0] + 63) = 0LL;
      DC::vClearRendering(v99[0]);
      *((_QWORD *)this + 18) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v80 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v86 = *((_QWORD *)this + 18);
      LOBYTE(v95) = 5;
      v87 = HmgShareUnlockRemoveObject(v86, 0LL, 0LL, 0LL, v95);
      if ( v87 )
        SURFACE::bDeleteSurface(v87, 0LL, 1LL);
      *((_QWORD *)v99[0] + 63) = 0LL;
      *((_QWORD *)this + 18) = 0LL;
    }
    if ( v99[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v99);
    v99[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  if ( *((_QWORD *)this + 21) )
  {
    v52 = (HDC)*((_QWORD *)this + 22);
    v100[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v100, v52);
    LOBYTE(v53) = 5;
    v54 = HmgShareLock(*((_QWORD *)this + 20), v53);
    LOBYTE(v55) = 5;
    v56 = (HSURF *)v54;
    v57 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 21), v55);
    v58 = *v56;
    v59 = v57;
    DC::pSurface(v100[0], v57);
    DEC_SHARE_REF_CNT(v56);
    DEC_SHARE_REF_CNT(v59);
    GreDereferenceObject(v58);
    v60 = v100[0];
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    if ( (*((_DWORD *)v60 + 9) & 0x200) != 0 )
    {
      v88 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock, v89, v90, v91);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v88 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v102);
      v92 = *((_QWORD *)this + 21);
      LOBYTE(v95) = 5;
      v93 = HmgShareUnlockRemoveObject(v92, 0LL, 0LL, 0LL, v95);
      if ( v93 )
        SURFACE::bDeleteSurface(v93, 0LL, 1LL);
      *((_QWORD *)v100[0] + 63) = 0LL;
      DC::vClearRendering(v100[0]);
      *((_QWORD *)this + 21) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v88 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v61 = *((_QWORD *)this + 21);
      LOBYTE(v95) = 5;
      v62 = HmgShareUnlockRemoveObject(v61, 0LL, 0LL, 0LL, v95);
      if ( v62 )
        SURFACE::bDeleteSurface(v62, 0LL, 1LL);
      *((_QWORD *)v100[0] + 63) = 0LL;
      *((_QWORD *)this + 21) = 0LL;
    }
    if ( v100[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v100);
    v100[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  v15 = *((_QWORD *)this + 13);
  if ( v15 )
  {
    if ( *((_BYTE *)this + 120) )
    {
      *(_DWORD *)(v15 + 40) &= ~2u;
      v15 = *((_QWORD *)this + 13);
      *((_BYTE *)this + 120) = 0;
    }
    if ( v15 )
    {
      v16 = (__int64 *)v15;
      if ( *((_DWORD *)this + 28) && (*(_DWORD *)(v15 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 104));
        *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) &= ~2u;
        v16 = (__int64 *)*((_QWORD *)this + 13);
        *((_DWORD *)this + 28) = 0;
      }
      v17 = *((unsigned int *)this + 29);
      v97 = 0;
      v18 = *v16;
      HmgDecrementExclusiveReferenceCountEx(v16, v17, &v97);
      if ( v97 )
        bDeleteDCInternalEx(v18, 0LL);
    }
    *((_QWORD *)this + 13) = 0LL;
  }
  v19 = *((_QWORD *)this + 10);
  if ( v19 )
  {
    if ( *((_BYTE *)this + 96) )
    {
      *(_DWORD *)(v19 + 40) &= ~2u;
      v19 = *((_QWORD *)this + 10);
      *((_BYTE *)this + 96) = 0;
    }
    if ( v19 )
    {
      v20 = (__int64 *)v19;
      if ( *((_DWORD *)this + 22) && (*(_DWORD *)(v19 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80));
        *(_DWORD *)(*((_QWORD *)this + 10) + 44LL) &= ~2u;
        v20 = (__int64 *)*((_QWORD *)this + 10);
        *((_DWORD *)this + 22) = 0;
      }
      v21 = *((unsigned int *)this + 23);
      v98 = 0;
      v22 = *v20;
      HmgDecrementExclusiveReferenceCountEx(v20, v21, &v98);
      if ( v98 )
        bDeleteDCInternalEx(v22, 0LL);
    }
    *((_QWORD *)this + 10) = 0LL;
  }
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
