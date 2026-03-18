/*
 * XREFs of ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800819E0
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800816C0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessUnclaimedTokens@CLegacySurfaceManager@@IEAAJPEAI@Z @ 0x18008184C (-ProcessUnclaimedTokens@CLegacySurfaceManager@@IEAAJPEAI@Z.c)
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z @ 0x18008198C (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180081B1C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800F5600 (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessLegacyTokens(
        CGlobalSurfaceManager *this,
        __int64 a2,
        unsigned int *a3)
{
  unsigned int v3; // r15d
  unsigned int v5; // esi
  unsigned int v6; // r13d
  int v7; // eax
  CLegacySurfaceManager *v8; // rcx
  unsigned int v9; // ebx
  int LegacyTokens; // eax
  unsigned int *v11; // r8
  __int64 v12; // rdi
  int v14; // eax
  int v15; // eax
  bool v16; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-2Ch] BYREF
  int v18; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-24h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  v5 = 0;
  v19 = 0;
  v6 = 0;
  v17 = 0;
  v18 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start,
      (__int64)a3,
      1u,
      &v20);
  v7 = CLegacySurfaceManager::ProcessUnclaimedTokens((CGlobalSurfaceManager *)((char *)this + 120), &v19, a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0LL, v7, 0x109u);
  }
  else
  {
    while ( 1 )
    {
      LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v8, &v17, &v18);
      *((_DWORD *)this + 54) = LegacyTokens;
      if ( LegacyTokens < 0 )
        break;
      v5 += v17;
      v12 = *((_QWORD *)this + 13);
      if ( v17 )
      {
        while ( 1 )
        {
          v16 = 0;
          v14 = CLegacySurfaceManager::ProcessToken(
                  (CGlobalSurfaceManager *)((char *)this + 120),
                  (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v12,
                  v11,
                  &v16);
          v9 = v14;
          if ( v14 < 0 )
            break;
          if ( !v16 )
          {
            v15 = CLegacySurfaceManager::AddUnclaimedToken(
                    (CGlobalSurfaceManager *)((char *)this + 120),
                    (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v12);
            v9 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0LL, v15, 0x121u);
              goto LABEL_7;
            }
          }
          ++v3;
          v12 += *(unsigned int *)(v12 + 4);
          if ( v3 >= v17 )
            goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0LL, v14, 0x11Cu);
        break;
      }
LABEL_6:
      v3 = 0;
      if ( !v18 )
        break;
      ++v6;
    }
  }
LABEL_7:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v5,
      v6);
  dword_1803D31EC += v5;
  return v9;
}
