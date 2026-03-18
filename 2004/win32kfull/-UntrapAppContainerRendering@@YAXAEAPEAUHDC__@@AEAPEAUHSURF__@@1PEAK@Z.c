/*
 * XREFs of ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0075990
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027D060 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00AFA30 (GreDereferenceObject.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011B8C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012AF7C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012B37C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRendering(HDC *a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  HDC v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  HSURF *v12; // rdi
  struct SURFACE *v13; // rax
  HSURF v14; // rsi
  struct SURFACE *v15; // rbx
  char v16; // bl
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  DCVISRGNSHARELOCK *v21; // rcx
  __int64 v22; // rax
  char v23; // [rsp+20h] [rbp-20h]
  char v24; // [rsp+20h] [rbp-20h]
  DC *v25[2]; // [rsp+30h] [rbp-10h] BYREF
  char v26; // [rsp+78h] [rbp+38h] BYREF

  if ( *a2 )
  {
    v8 = *a1;
    v25[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v25, v8);
    LOBYTE(v9) = 5;
    v10 = HmgShareLock(*a3, v9);
    LOBYTE(v11) = 5;
    v12 = (HSURF *)v10;
    v13 = (struct SURFACE *)HmgShareLock(*a2, v11);
    v14 = *v12;
    v15 = v13;
    DC::pSurface(v25[0], v13);
    DEC_SHARE_REF_CNT(v12);
    DEC_SHARE_REF_CNT(v15);
    GreDereferenceObject(v14);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v25[0] + 9) |= *a4;
    if ( (*((_DWORD *)v25[0] + 9) & 0x200) != 0 )
    {
      v16 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock, v17, v18, v19);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v16 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v26);
      v23 = 5;
      v20 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v23);
      if ( v20 )
        SURFACE::bDeleteSurface(v20, 0LL, 1LL);
      *((_QWORD *)v25[0] + 63) = 0LL;
      DC::vClearRendering(v25[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v21);
      if ( v16 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v24 = 5;
      v22 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v24);
      if ( v22 )
        SURFACE::bDeleteSurface(v22, 0LL, 1LL);
      *((_QWORD *)v25[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    if ( v25[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v25);
    v25[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
}
