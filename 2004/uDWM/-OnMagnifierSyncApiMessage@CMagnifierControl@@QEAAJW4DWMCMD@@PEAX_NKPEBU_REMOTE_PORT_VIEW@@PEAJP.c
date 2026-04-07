/*
 * XREFs of ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18008CCE4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000D8C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _Init_thread_footer @ 0x1800537BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005382C (_Init_thread_header.c)
 *     ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z @ 0x18008B5B8 (-OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKHPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTU.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18008C300 (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierSyncApiMessage(
        CMagnifierControl *a1,
        int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        CMagnifier *a6,
        int *a7,
        _DWORD *a8)
{
  unsigned int v9; // ebx
  int v13; // esi
  int v14; // eax
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  v13 = -2147023728;
  if ( dword_1800E8008 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E8008);
    if ( dword_1800E8008 == -1 )
    {
      dword_1800E7F4C = -2147023728;
      Init_thread_footer(&dword_1800E8008);
    }
  }
  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 == 1073741924 && a4 )
  {
    a6 = 0LL;
    *a8 = 44;
    v14 = CMagnifierControl::LookupAndValidateMagnifier(a1, *(_QWORD *)(a3 + 48), &a6);
    v9 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -2147023728 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E7F4C, 1LL, v14, 0x1E8u);
        goto LABEL_14;
      }
      v9 = 0;
    }
    else
    {
      v13 = CMagnifier::OnCaptureRTBitsWorker(
              a6,
              *(_QWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 4),
              *(_DWORD *)(a3 + 72),
              (const struct MAGN_UPDATE_TEXTURES_PARAM *)(a3 + 8),
              (struct MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *)a3);
    }
    if ( a7 )
      *a7 = v13;
    *(_DWORD *)a3 = 1073741925;
    *(_DWORD *)(a3 + 4) = v13;
  }
LABEL_14:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v9;
}
