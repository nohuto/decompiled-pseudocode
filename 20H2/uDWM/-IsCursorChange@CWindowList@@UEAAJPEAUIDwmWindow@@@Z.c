/*
 * XREFs of ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004FF30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___ @ 0x18005000C (CWindowList--ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x180050068 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::IsCursorChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  char v6; // al
  CVisual *v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v10; // [rsp+60h] [rbp+18h] BYREF
  struct CWindowData **v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1AE9u);
  }
  else if ( v10 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
    *((_BYTE *)v10 + 612) ^= (*((_BYTE *)v10 + 612) ^ (4 * v6)) & 4;
    v7 = (CVisual *)*((_QWORD *)v10 + 48);
    if ( v7 )
    {
      CVisual::SetIsCursor(v7, (*((_BYTE *)v10 + 612) & 4) != 0);
      v11 = &v10;
      CWindowList::ForEachSoftwareCursorListener__lambda_3a525a268788499e62ab8aaec5424964___(this, &v11);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v5;
}
