/*
 * XREFs of ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18003D470
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001996C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z @ 0x1800BDE94 (-SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::SetPassiveUpdateMode(CWindowList *this, struct IDwmWindow *a2, bool a3)
{
  int SyncedWindowData; // eax
  int v7; // ebx
  __int64 v8; // rcx
  int updated; // eax
  struct CWindowData *v11; // [rsp+58h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0xAC0u);
  }
  else if ( v11 )
  {
    v8 = *((_QWORD *)v11 + 48);
    if ( v8 )
    {
      v7 = 0;
      if ( a3 != ((*(_BYTE *)(v8 + 241) & 8) != 0) )
      {
        *(_BYTE *)(v8 + 241) = (8 * a3) | *(_BYTE *)(v8 + 241) & 0xF7;
        updated = CVisualProxy::SetPassiveUpdateMode(*(CVisualProxy **)(v8 + 16), a3);
        v7 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x129u);
      }
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xAC4u);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v7;
}
