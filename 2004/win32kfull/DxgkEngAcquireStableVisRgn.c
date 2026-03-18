/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x1C0277840
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  UserEnterUserCritSecShared();
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, v2, v3, v4);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0]
    && ((v13 = *(_QWORD *)(v12[0] + 48LL), (**(_DWORD **)(v12[0] + 976LL) & 1) != 0)
     || (v5 = *(_DWORD *)(v12[0] + 36LL), (v5 & 0x200) != 0) && (v5 & 0x8000) != 0)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock, v6, v7, v8);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
  }
  else
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn, v9, v10, v11);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
}
