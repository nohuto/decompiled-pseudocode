/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x1C02762D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  int v2; // eax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  UserEnterUserCritSecShared();
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0]
    && ((v4 = *(_QWORD *)(v3[0] + 48LL), (**(_DWORD **)(v3[0] + 976LL) & 1) != 0)
     || (v2 = *(_DWORD *)(v3[0] + 36LL), (v2 & 0x200) != 0) && (v2 & 0x8000) != 0)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v4) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
  }
  else
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( v3[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
}
