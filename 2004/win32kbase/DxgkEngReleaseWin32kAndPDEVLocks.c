/*
 * XREFs of DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C00BA0E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     hdevEnumerate @ 0x1C00A6690 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C00A7D50 (GreUnlockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00BA080 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(__int64 a1, unsigned int a2, int a3)
{
  struct PDEV *i; // rcx
  struct PDEV *v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PERESOURCE v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  struct PDEV *v23; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (struct PDEV *)v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    v23 = v6;
    v8 = *((_DWORD *)v6 + 10);
    if ( (v8 & 0x400) == 0 && (v8 & 0x20000) == 0 )
    {
      v9 = *(_QWORD *)(v7 + 2576);
      if ( *(_QWORD *)(v9 + 240) == a1 && *(_DWORD *)(v9 + 256) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v23,
          (struct _SURFOBJ *)((*(_QWORD *)(v7 + 2552) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v7 + 2552) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v7, v21, v22);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, a3);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion(v11);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v10);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v13);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v12);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v15);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v14);
  v19 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v20);
  }
  UserSessionSwitchLeaveCrit((__int64)v19, v16, v17, v18);
}
