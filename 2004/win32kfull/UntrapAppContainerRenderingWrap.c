/*
 * XREFs of UntrapAppContainerRenderingWrap @ 0x1C00759E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00AFA30 (GreDereferenceObject.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011B8C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012AF7C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012B37C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall UntrapAppContainerRenderingWrap(HDC *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  HDC v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  HSURF *v13; // rdi
  struct SURFACE *v14; // rax
  HSURF v15; // rsi
  struct SURFACE *v16; // rbx
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  DCVISRGNSHARELOCK *v22; // rcx
  __int64 v23; // rax
  char v24; // [rsp+20h] [rbp-20h]
  char v25; // [rsp+20h] [rbp-20h]
  DC *v26[2]; // [rsp+30h] [rbp-10h] BYREF
  char v27; // [rsp+78h] [rbp+38h] BYREF

  result = 0LL;
  if ( *a2 )
  {
    v9 = *a1;
    v26[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v26, v9);
    LOBYTE(v10) = 5;
    v11 = HmgShareLock(*a3, v10);
    LOBYTE(v12) = 5;
    v13 = (HSURF *)v11;
    v14 = (struct SURFACE *)HmgShareLock(*a2, v12);
    v15 = *v13;
    v16 = v14;
    DC::pSurface(v26[0], v14);
    DEC_SHARE_REF_CNT(v13);
    DEC_SHARE_REF_CNT(v16);
    GreDereferenceObject(v15);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v26[0] + 9) |= *a4;
    if ( (*((_DWORD *)v26[0] + 9) & 0x200) != 0 )
    {
      v17 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock, v18, v19, v20);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v17 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v27);
      v24 = 5;
      v21 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v24);
      if ( v21 )
        SURFACE::bDeleteSurface(v21, 0LL, 1LL);
      *((_QWORD *)v26[0] + 63) = 0LL;
      DC::vClearRendering(v26[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v22);
      if ( v17 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v25 = 5;
      v23 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v25);
      if ( v23 )
        SURFACE::bDeleteSurface(v23, 0LL, 1LL);
      *((_QWORD *)v26[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    if ( v26[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v26);
    v26[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    return GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  return result;
}
