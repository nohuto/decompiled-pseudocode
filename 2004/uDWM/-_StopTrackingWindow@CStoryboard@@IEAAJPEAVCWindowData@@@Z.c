/*
 * XREFs of ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800B2454
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B2620 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x1800956F0 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___ @ 0x1800A9E90 (CTransitionVisualController--ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800AB8C0 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CStoryboard::_StopTrackingWindow(CStoryboard *this, struct CWindowData *a2)
{
  CStoryboard *v3; // rsi
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  CStoryboard *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  v3 = (CStoryboard *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
  v4 = CTransitionVisualController::_RestoreWindowVisual(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = v3;
    CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___(
      (__int64)a2,
      (__int64)&v9,
      1);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0xC37u);
  }
  if ( v5 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p_EtwEventWriteTransfer(v6, (__int64)&CommitChannel_StopTrackingWindow, (__int64)a2);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                         + 16LL)
                                           + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 5)
                                                              + 16LL));
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x14D1u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x14CCu);
  }
  return (unsigned int)v5;
}
