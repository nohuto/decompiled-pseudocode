/*
 * XREFs of ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18009A460
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000D8C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18000E298 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18000E478 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::UpdateThumbnailProperties(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *a3)
{
  struct CThumbnailData *ThumbnailData; // rax
  const struct _DWM_THUMBNAIL_PROPERTIES *v7; // rdx
  int updated; // eax
  unsigned int v9; // ebx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  if ( ThumbnailData
    && a2 == *((_DWORD *)a3 + 2)
    && ((v7 = (const struct _DWM_THUMBNAIL_PROPERTIES *)((char *)a3 + 12), !*((_BYTE *)ThumbnailData + 34))
     || (v7->dwFlags & 0x3EFFFFF) != 0x3EFFFFF && (v7->dwFlags & 0xFC100000) != 0) )
  {
    updated = CThumbnailData::UpdateProperties(ThumbnailData, v7);
    v9 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1045u);
  }
  else
  {
    v9 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v9;
}
