/*
 * XREFs of DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C0010F90
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0011850 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C0011B00 (GreUnlockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0011BC0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall DxgkEngReleaseWin32kAndPDEVLocks(__int64 a1, unsigned int a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  PERESOURCE v9; // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v6 )
  {
    v5 = hdevEnumerate(i);
    v6 = v5;
    if ( !v5 )
      break;
    v11 = v5;
    v7 = *(_DWORD *)(v5 + 40);
    if ( (v7 & 0x400) == 0 && (v7 & 0x20000) == 0 )
    {
      v8 = *(_QWORD *)(v6 + 2576);
      if ( *(_QWORD *)(v8 + 240) == a1 && *(_DWORD *)(v8 + 256) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v11,
          (struct _SURFOBJ *)((*(_QWORD *)(v6 + 2552) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v6 + 2552) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v6);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v9 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return UserSessionSwitchLeaveCrit(v9);
}
