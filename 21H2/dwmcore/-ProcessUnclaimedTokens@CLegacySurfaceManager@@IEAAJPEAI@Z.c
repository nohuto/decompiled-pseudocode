/*
 * XREFs of ?ProcessUnclaimedTokens@CLegacySurfaceManager@@IEAAJPEAI@Z @ 0x18008184C
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800819E0 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180081B1C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessUnclaimedTokens(
        CLegacySurfaceManager *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // esi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v10; // r15
  unsigned int v11; // r14d
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int i; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  bool v19; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+38h] [rbp-30h] BYREF

  v3 = *((_DWORD *)this + 32);
  v4 = 0;
  *a2 = 0;
  if ( v3 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start,
        (__int64)a3,
        1u,
        &v20);
    v7 = 0;
    if ( *((_DWORD *)this + 32) )
    {
      while ( 1 )
      {
        v8 = *((_QWORD *)this + 13);
        v19 = 0;
        ++*(_DWORD *)(v8 + 16LL * v7);
        v9 = *((_QWORD *)this + 13);
        v10 = *(const struct _D3DKMT_PRESENTHISTORYTOKEN **)(v9 + 16LL * v7 + 8);
        v11 = *(_DWORD *)(v9 + 16LL * v7);
        v12 = CLegacySurfaceManager::ProcessToken(this, v10, a3, &v19);
        v4 = v12;
        if ( v12 < 0 )
          break;
        if ( v11 > 0x64 || v19 )
        {
          v14 = *((unsigned int *)this + 32);
          if ( v7 >= (unsigned int)v14 )
          {
            v4 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, -2147024809, 0x19Cu);
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, -2147024809, 0x116u);
            goto LABEL_10;
          }
          v15 = *((_QWORD *)this + 13);
          for ( i = v7; i < (int)v14 - 1; LODWORD(v14) = *((_DWORD *)this + 32) )
          {
            v17 = 2LL * i;
            v14 = 2LL * ++i;
            *(_OWORD *)(v15 + 8 * v17) = *(_OWORD *)(v15 + 8 * v14);
          }
          v4 = 0;
          *((_DWORD *)this + 32) = v14 - 1;
          DefaultHeap::Free(v10);
          if ( !v19 )
            ++*((_DWORD *)this + 25);
          --v7;
        }
        if ( ++v7 >= *((_DWORD *)this + 32) )
          goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x10Eu);
    }
LABEL_10:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop,
        (__int64)a3,
        1u,
        &v20);
  }
  return v4;
}
