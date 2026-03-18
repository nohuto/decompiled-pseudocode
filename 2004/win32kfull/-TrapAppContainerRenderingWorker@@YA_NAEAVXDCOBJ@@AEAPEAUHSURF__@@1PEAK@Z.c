/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0079160
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001BD00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C0079140 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C004F8CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011B8C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012AF7C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012B37C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  char v4; // si
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  DYNAMICMODECHANGESHARELOCK *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  DC *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  SURFACE *v26; // rdi
  struct SURFACE *v27; // rbx
  DC *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  char v33; // bp
  __int64 v34; // rdx
  __int64 CompatibleBitmapInternal; // rbx
  DCVISRGNSHARELOCK *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  DCVISRGNSHARELOCK *v39; // rcx
  _BYTE v40[16]; // [rsp+30h] [rbp-38h] BYREF
  char v41; // [rsp+78h] [rbp+10h] BYREF

  v4 = 0;
  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 328) & 8) != 0 )
      return 1;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v41, v11, v12, v13);
  v17 = *((_QWORD *)*a1 + 62);
  if ( !v17
    || (v18 = *(_QWORD *)(v17 + 640), v18 == PsGetCurrentProcess(v15, v14, v16)) && *(int *)(v17 + 112) >= 0
    || (v21 = *a1, *((_QWORD *)*a1 + 59))
    && *((_DWORD *)v21 + 122)
    && !*((_DWORD *)v21 + 123)
    && (v32 = *((_QWORD *)v21 + 60), PsGetCurrentProcess(v15, v19, v20) == v32) )
  {
    v4 = 1;
  }
  else
  {
    if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
    {
      v33 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphore(ghsemGreLock);
        v33 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v40);
      DC::vSetRendering(*a1);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                   *(HDC *)*a1,
                                   *(_DWORD *)(v17 + 56),
                                   *(_DWORD *)(v17 + 60),
                                   0,
                                   0LL,
                                   0LL);
      if ( !CompatibleBitmapInternal )
      {
        DC::vClearRendering(*a1);
        if ( v33 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v36);
        goto LABEL_9;
      }
      LOBYTE(v34) = 5;
      v37 = HmgShareLock(**((_QWORD **)*a1 + 62), v34);
      LOBYTE(v38) = 5;
      v26 = (SURFACE *)v37;
      v27 = (struct SURFACE *)HmgShareLock(CompatibleBitmapInternal, v38);
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v39);
      if ( v33 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      goto LABEL_14;
    }
    v23 = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, *(_DWORD *)(v17 + 56), *(_DWORD *)(v17 + 60), 0, 0LL, 0LL);
    if ( v23 )
    {
      LOBYTE(v22) = 5;
      v24 = HmgShareLock(**((_QWORD **)*a1 + 62), v22);
      LOBYTE(v25) = 5;
      v26 = (SURFACE *)v24;
      v27 = (struct SURFACE *)HmgShareLock(v23, v25);
LABEL_14:
      *a2 = *(HSURF *)v26;
      *a3 = *(HSURF *)v27;
      INC_SHARE_REF_CNT(v26);
      v28 = *a1;
      if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v26) )
      {
        ++*((_DWORD *)v27 + 81);
        v28 = *a1;
      }
      *((_QWORD *)v28 + 63) = *a2;
      DC::pSurface(*a1, v27);
      INC_SHARE_REF_CNT(v27);
      if ( a4 )
      {
        *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
        *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
      }
      GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, v29, v30, v31);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      v4 = 1;
      DEC_SHARE_REF_CNT(v27);
      DEC_SHARE_REF_CNT(v26);
    }
  }
LABEL_9:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v15);
  return v4;
}
