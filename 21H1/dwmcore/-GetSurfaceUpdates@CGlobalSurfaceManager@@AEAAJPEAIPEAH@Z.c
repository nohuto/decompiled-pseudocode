/*
 * XREFs of ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z @ 0x180168A88
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800774A0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18006A044 (-GetCurrentFrameId@@YA_KXZ.c)
 */

__int64 __fastcall CGlobalSurfaceManager::GetSurfaceUpdates(CGlobalSurfaceManager *this, unsigned int *a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  int FrameSurfaceUpdates; // eax
  __int64 v7; // rcx
  unsigned __int64 CurrentFrameId; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  CurrentFrameId = GetCurrentFrameId();
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&CurrentFrameId, v4, v5);
  if ( FrameSurfaceUpdates < 0 )
  {
    v3 = FrameSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802DC1F8, 3u, FrameSurfaceUpdates | 0x10000000, 0xA9u, 0LL);
  }
  return v3;
}
