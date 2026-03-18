/*
 * XREFs of DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C00B1560
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00B1200 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     hdevEnumerate @ 0x1C00B4FA0 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C00B51B0 (GreUnlockDisplayDevice.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(__int64 a1, unsigned int a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  PERESOURCE v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v7 )
  {
    v5 = hdevEnumerate(i);
    v7 = v5;
    if ( !v5 )
      break;
    v18 = v5;
    v8 = *(_DWORD *)(v5 + 40);
    if ( (v8 & 0x400) == 0 && (v8 & 0x20000) == 0 )
    {
      v9 = *(_QWORD *)(v7 + 2576);
      if ( *(_QWORD *)(v9 + 240) == a1 && *(_DWORD *)(v9 + 256) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v18,
          (struct _SURFOBJ *)((*(_QWORD *)(v7 + 2552) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v7 + 2552) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v7);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v6);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
    PsLeavePriorityRegion(v11);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v10);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    PsLeavePriorityRegion(v13);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v12);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v15);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v14);
  v16 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v17);
  }
  UserSessionSwitchLeaveCrit((__int64)v16);
}
