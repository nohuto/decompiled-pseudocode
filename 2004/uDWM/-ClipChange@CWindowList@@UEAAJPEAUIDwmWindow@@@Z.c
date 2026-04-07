/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029200
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029020 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18000F59C (-OnClipUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x180013EF8 (--$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryP.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18001D644 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x180024E5C (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800271F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  struct CWindowData *v6; // rdi
  CBaseObject **v7; // rsi
  bool v8; // bp
  int v9; // eax
  CAccent **v10; // rcx
  int ProxyFromShared; // eax
  int v13; // eax
  int v14; // eax
  CWindowData *v15; // rcx
  HANDLE hObject; // [rsp+60h] [rbp+18h] BYREF
  struct CWindowData *v17; // [rsp+68h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  hObject = 0LL;
  v17 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v17);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x138Au);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1394u);
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
                                  (__int64)hObject,
                                  (volatile signed __int32 **)v6 + 46),
              v5 = ProxyFromShared,
              ProxyFromShared >= 0) )
        {
          v10 = (CAccent **)*((_QWORD *)v6 + 48);
          if ( v10 && (v13 = CTopLevelWindow::OnClipUpdated(v10), v5 = v13, v13 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x139Fu);
          }
          else if ( v8 != (*v7 != 0LL) )
          {
            v14 = CWindowData::NotifyRepresentationChanged(v6);
            v5 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x13A7u);
            else
              CWindowData::UnmetTabRequirementsMaybeUpdated(v15);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyFromShared, 0x1398u);
        }
      }
    }
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
