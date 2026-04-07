/*
 * XREFs of ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180096B60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018AD4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B070 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800948AC (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x1800963F0 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B5F6C (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B5FD8 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800B6638 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800B67F4 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B6888 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::DesktopThumbnailChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned int v9; // ebx
  volatile signed __int32 *v10; // rdi
  int SyncedWindowData; // eax
  struct CWindowData *v12; // rsi
  CTopLevelWindow *v13; // r12
  int DesktopThumbnail; // eax
  CBaseObject *v15; // r14
  CDesktopThumbnailBase *v16; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  __int64 v19; // rax
  unsigned int v20; // ecx
  CBaseObject *v21; // rcx
  struct tagRECT *v22; // rdx
  int v23; // eax
  struct CDesktopThumbnailCVI *v24; // rdx
  CDesktopThumbnailCVIVisual *v25; // rcx
  int v26; // eax
  int v27; // eax
  CBaseObject *v29; // [rsp+30h] [rbp-48h] BYREF
  CDesktopThumbnailCVIVisual *v30; // [rsp+38h] [rbp-40h] BYREF
  CBaseObject *v31; // [rsp+40h] [rbp-38h] BYREF
  struct CWindowData *v32; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT *v33; // [rsp+50h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+58h] [rbp-20h] BYREF
  struct tagRECT v35; // [rsp+60h] [rbp-18h] BYREF

  v33 = a3;
  v34 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0;
  v10 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  if ( !a2 )
    goto LABEL_35;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v32);
  v9 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, 0x11C8u);
    goto LABEL_35;
  }
  v12 = v32;
  if ( !v32 )
    goto LABEL_35;
  v13 = (CTopLevelWindow *)*((_QWORD *)v32 + 48);
  if ( !v13 || *((_DWORD *)v32 + 28) == 1 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x11D2u);
    goto LABEL_35;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v29);
  v9 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopThumbnail, 0x11D6u);
LABEL_27:
    v15 = v29;
    goto LABEL_28;
  }
  v15 = v29;
  v16 = v29;
  *((_QWORD *)v29 + 34) = *((_QWORD *)v12 + 15);
  updated = CDesktopThumbnailBase::UpdateWindowClones(v16);
  v9 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x11D7u);
    goto LABEL_28;
  }
  v35 = *a4;
  PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v15, &v35, &v31);
  v9 = PerMonitorDesktopThumbnail;
  if ( PerMonitorDesktopThumbnail >= 0 )
  {
    v19 = *((_QWORD *)v12 + 72);
    v20 = a6 & 0x200000;
    if ( v19 )
    {
      if ( v20 )
      {
        VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(v19 + 24) + 32LL), *((struct CVisual **)v12 + 72));
        v21 = (CBaseObject *)*((_QWORD *)v12 + 72);
        if ( v21 )
        {
          CBaseObject::Release(v21);
          *((_QWORD *)v12 + 72) = 0LL;
        }
      }
      else
      {
        v22 = v33;
        *(_DWORD *)(v19 + 340) = a6;
        CDesktopThumbnailCVIVisual::Update(*((CDesktopThumbnailCVIVisual **)v12 + 72), v22, (double)a5 / 255.0);
      }
      goto LABEL_28;
    }
    if ( !v20 )
    {
      v23 = CDesktopThumbnailCVIVisual::Create(&v30);
      v9 = v23;
      if ( v23 >= 0 )
      {
        v10 = (volatile signed __int32 *)v30;
        v24 = v31;
        v25 = v30;
        *((_QWORD *)v30 + 39) = v12;
        *((_DWORD *)v25 + 85) = a6;
        *((_BYTE *)v25 + 337) = 0;
        v26 = CDesktopThumbnailCVIVisual::SetVisual(v25, v24, a4);
        v9 = v26;
        if ( v26 >= 0 )
        {
          CDesktopThumbnailCVIVisual::Update((CDesktopThumbnailCVIVisual *)v10, v33, (double)a5 / 255.0);
          v27 = CTopLevelWindow::OnThumbnailAdded(v13, (struct CVisual *)v10);
          v9 = v27;
          if ( v27 >= 0 )
          {
            *((_QWORD *)v12 + 72) = v10;
            _InterlockedIncrement(v10 + 2);
            v10 = (volatile signed __int32 *)v30;
            goto LABEL_27;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x11F8u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x11F5u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x11EFu);
        v10 = (volatile signed __int32 *)v30;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, PerMonitorDesktopThumbnail, 0x11D8u);
  }
LABEL_28:
  if ( v15 )
    CBaseObject::Release(v15);
  if ( v31 )
    CBaseObject::Release(v31);
  if ( v10 )
    CBaseObject::Release((CBaseObject *)v10);
LABEL_35:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v34);
  return v9;
}
