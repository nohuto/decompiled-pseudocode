/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00B4DE0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00984B8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C00B4DC0 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00852CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009AB10 (GreCreateCompatibleBitmapInternal.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00A7490 (-vClearRendering@DC@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011C2B0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012CEF8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012D26C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  char v4; // si
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  DC *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  SURFACE *v23; // rdi
  struct SURFACE *v24; // rbx
  DC *v25; // r8
  __int64 v26; // rbx
  char v27; // bp
  __int64 v28; // rdx
  __int64 CompatibleBitmapInternal; // rbx
  DCVISRGNSHARELOCK *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  DCVISRGNSHARELOCK *v33; // rcx
  _BYTE v34[16]; // [rsp+30h] [rbp-38h] BYREF
  char v35; // [rsp+78h] [rbp+10h] BYREF

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
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v35);
  v14 = *((_QWORD *)*a1 + 62);
  if ( !v14
    || (v15 = *(_QWORD *)(v14 + 640), v15 == PsGetCurrentProcess(v12, v11, v13)) && *(int *)(v14 + 112) >= 0
    || (v18 = *a1, *((_QWORD *)*a1 + 59))
    && *((_DWORD *)v18 + 122)
    && !*((_DWORD *)v18 + 123)
    && (v26 = *((_QWORD *)v18 + 60), PsGetCurrentProcess(v12, v16, v17) == v26) )
  {
    v4 = 1;
  }
  else
  {
    if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
    {
      v27 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphore(ghsemGreLock);
        v27 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v34);
      DC::vSetRendering(*a1);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                   *(HDC *)*a1,
                                   *(_DWORD *)(v14 + 56),
                                   *(_DWORD *)(v14 + 60),
                                   0,
                                   0LL,
                                   0LL);
      if ( !CompatibleBitmapInternal )
      {
        DC::vClearRendering(*a1);
        if ( v27 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v30);
        goto LABEL_9;
      }
      LOBYTE(v28) = 5;
      v31 = HmgShareLock(**((_QWORD **)*a1 + 62), v28);
      LOBYTE(v32) = 5;
      v23 = (SURFACE *)v31;
      v24 = (struct SURFACE *)HmgShareLock(CompatibleBitmapInternal, v32);
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v33);
      if ( v27 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      goto LABEL_14;
    }
    v20 = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, *(_DWORD *)(v14 + 56), *(_DWORD *)(v14 + 60), 0, 0LL, 0LL);
    if ( v20 )
    {
      LOBYTE(v19) = 5;
      v21 = HmgShareLock(**((_QWORD **)*a1 + 62), v19);
      LOBYTE(v22) = 5;
      v23 = (SURFACE *)v21;
      v24 = (struct SURFACE *)HmgShareLock(v20, v22);
LABEL_14:
      *a2 = *(HSURF *)v23;
      *a3 = *(HSURF *)v24;
      INC_SHARE_REF_CNT(v23);
      v25 = *a1;
      if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v23) )
      {
        ++*((_DWORD *)v24 + 81);
        v25 = *a1;
      }
      *((_QWORD *)v25 + 63) = *a2;
      DC::pSurface(*a1, v24);
      INC_SHARE_REF_CNT(v24);
      if ( a4 )
      {
        *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
        *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
      }
      GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      v4 = 1;
      DEC_SHARE_REF_CNT(v24);
      DEC_SHARE_REF_CNT(v23);
    }
  }
LABEL_9:
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
  return v4;
}
