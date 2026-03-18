/*
 * XREFs of ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z @ 0x18008198C
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800819E0 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySurfaceManager::GetLegacyTokens(CLegacySurfaceManager *this, unsigned int *a2, int *a3)
{
  unsigned int v4; // ebx
  int FrameLegacyTokens; // eax
  __int64 v6; // rcx
  unsigned __int64 CurrentFrameId; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  CurrentFrameId = GetCurrentFrameId();
  FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&CurrentFrameId);
  if ( FrameLegacyTokens < 0 )
  {
    v4 = FrameLegacyTokens | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, FrameLegacyTokens | 0x10000000, 0x1Du);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
      v4,
      *a2);
  return v4;
}
