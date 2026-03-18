/*
 * XREFs of ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z @ 0x180081810
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800816C0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 */

__int64 __fastcall CGlobalSurfaceManager::GetSurfaceUpdates(CGlobalSurfaceManager *this, unsigned int *a2, int *a3)
{
  unsigned int v3; // ebx
  int FrameSurfaceUpdates; // eax
  __int64 v5; // rcx
  unsigned __int64 CurrentFrameId; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  CurrentFrameId = GetCurrentFrameId();
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&CurrentFrameId);
  if ( FrameSurfaceUpdates < 0 )
  {
    v3 = FrameSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1803458B8, 3LL, FrameSurfaceUpdates | 0x10000000, 0xA4u);
  }
  return v3;
}
