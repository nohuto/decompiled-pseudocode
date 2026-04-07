/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015E00
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180013120 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18001612C (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016260 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180028A04 (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x18003CB34 (--$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryP.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  CBaseObject **v7; // rsi
  bool v8; // bp
  int v9; // eax
  CTopLevelWindow *v10; // rcx
  int ProxyFromShared; // eax
  int v13; // eax
  int v14; // eax
  CWindowData *v15; // rcx
  HANDLE hObject; // [rsp+60h] [rbp+18h] BYREF
  CWindowData *v17; // [rsp+68h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  hObject = 0LL;
  v17 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v17);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x1396u);
  }
  else
  {
    v6 = v17;
    if ( v17 && *((_QWORD *)v17 + 4) )
    {
      v7 = (CBaseObject **)((char *)v17 + 368);
      v8 = *((_QWORD *)v17 + 46) != 0LL;
      v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *, HANDLE *))(*(_QWORD *)a2 + 336LL))(a2, &hObject);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x13A0u);
      }
      else
      {
        if ( *v7 )
        {
          CBaseObject::Release(*v7);
          *v7 = 0LL;
        }
        if ( (char *)hObject - 1 > (char *)0xFFFFFFFFFFFFFFFDLL
          || (ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CBaseGeometryProxy>(
                                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                                  hObject,
                                  (char *)v6 + 368),
              v5 = ProxyFromShared,
              ProxyFromShared >= 0) )
        {
          v10 = (CTopLevelWindow *)*((_QWORD *)v6 + 48);
          if ( v10 && (v13 = CTopLevelWindow::OnClipUpdated(v10), v5 = v13, v13 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x13ABu);
          }
          else if ( v8 != (*v7 != 0LL) )
          {
            v14 = CWindowData::NotifyRepresentationChanged(v6);
            v5 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x13B3u);
            else
              CWindowData::UnmetTabRequirementsMaybeUpdated(v15);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyFromShared, 0x13A4u);
        }
      }
    }
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
