/*
 * XREFs of ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x18009C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z @ 0x18001FE00 (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D2C0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18009C4EC (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ??4?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionSurfaceInfo@@@Z @ 0x18009D2CC (--4-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompo.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B23CC (McGenEventWrite_EventWriteTransfer.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800DCF1C (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180152A88 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z @ 0x180164648 (-GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessSurfaceUpdates(
        CGlobalSurfaceManager *this,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v3; // r14
  CGlobalSurfaceManager *v4; // r12
  unsigned int v5; // r13d
  unsigned int v6; // r15d
  char *v7; // rsi
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  CGlobalSurfaceManager *v11; // rcx
  int FrameLegacyTokens; // eax
  unsigned int *v13; // r8
  __int64 v14; // rdi
  char v15; // al
  CGlobalSurfaceManager *v16; // rcx
  int FrameSurfaceUpdates; // eax
  CGlobalSurfaceManager *v18; // rcx
  unsigned int v19; // edi
  unsigned int v20; // edi
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  void *v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // rax
  __int64 v31; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v32; // r12
  unsigned int v33; // r15d
  int v34; // eax
  bool v35; // r14
  __int64 v36; // rcx
  __int64 v37; // r9
  unsigned int i; // r8d
  __int64 v39; // rax
  int LegacyTokens; // eax
  __int64 v41; // rcx
  int v42; // r9d
  unsigned int v43; // [rsp+20h] [rbp-B8h]
  bool v44[4]; // [rsp+30h] [rbp-A8h] BYREF
  int SurfaceUpdates; // [rsp+34h] [rbp-A4h]
  unsigned int v46; // [rsp+38h] [rbp-A0h] BYREF
  CGlobalSurfaceManager *v47; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v49; // [rsp+4Ch] [rbp-8Ch]
  int v50; // [rsp+50h] [rbp-88h] BYREF
  int v51; // [rsp+54h] [rbp-84h] BYREF
  unsigned int v52; // [rsp+58h] [rbp-80h]
  _QWORD Buffer[2]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v54[16]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v55[16]; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v56[16]; // [rsp+90h] [rbp-48h] BYREF

  v3 = 0LL;
  v47 = this;
  v4 = this;
  v48 = 0;
  v5 = 0;
  v51 = 0;
  v6 = 0;
  v52 = 0;
  v49 = 0;
  v46 = 0;
  v50 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start,
      a3,
      1LL,
      Buffer);
  v7 = (char *)v4 + 96;
  v8 = 0;
  v9 = *((_DWORD *)v4 + 56);
  if ( v9 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start,
        a3,
        1LL,
        v54);
      v9 = *((_DWORD *)v4 + 56);
    }
    v29 = 0;
    if ( v9 )
    {
      while ( 1 )
      {
        v30 = *((_QWORD *)v7 + 13);
        v44[0] = 0;
        ++*(_DWORD *)(v30 + 16LL * v29);
        v31 = *((_QWORD *)v7 + 13);
        v32 = *(const struct _D3DKMT_PRESENTHISTORYTOKEN **)(v31 + 16LL * v29 + 8);
        v33 = *(_DWORD *)(v31 + 16LL * v29);
        v34 = CLegacySurfaceManager::ProcessToken((CLegacySurfaceManager *)v7, v32, a3, v44);
        v8 = v34;
        if ( v34 < 0 )
          break;
        v35 = v44[0];
        if ( v44[0] || v33 > 0x64 )
        {
          v36 = *((unsigned int *)v7 + 32);
          if ( v29 >= (unsigned int)v36 )
          {
            v3 = 0LL;
            v8 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024809, 0x19Cu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, -2147024809, 0x10Du, 0LL);
            goto LABEL_51;
          }
          v37 = *((_QWORD *)v7 + 13);
          for ( i = v29; i < (int)v36 - 1; LODWORD(v36) = *((_DWORD *)v7 + 32) )
          {
            v39 = 2LL * i;
            v36 = 2LL * ++i;
            *(_OWORD *)(v37 + 8 * v39) = *(_OWORD *)(v37 + 8 * v36);
          }
          v8 = 0;
          *((_DWORD *)v7 + 32) = v36 - 1;
          operator delete(v32);
          if ( !v35 )
            ++*((_DWORD *)v7 + 25);
          --v29;
        }
        ++v29;
        v3 = 0LL;
        if ( v29 >= *((_DWORD *)v7 + 32) )
          goto LABEL_51;
      }
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v34, 0x105u, 0LL);
LABEL_51:
      v4 = v47;
      v6 = 0;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop,
        a3,
        1LL,
        v55);
    if ( v8 < 0 )
    {
      v42 = v8;
      v43 = 264;
LABEL_71:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v42, v43, 0LL);
      goto LABEL_13;
    }
  }
  v10 = 0;
  v11 = 0LL;
  if ( g_pComposition )
    v11 = (CGlobalSurfaceManager *)*((_QWORD *)g_pComposition + 44);
  v47 = v11;
  FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&v47);
  if ( FrameLegacyTokens < 0 )
  {
    v10 = FrameLegacyTokens | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x1Du, 0LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
      (unsigned int)v10,
      v46);
  *((_DWORD *)v4 + 48) = v10;
  if ( v10 >= 0 )
  {
    while ( 1 )
    {
      v5 += v46;
      v14 = *((_QWORD *)v4 + 57);
      if ( v46 )
        break;
LABEL_12:
      v3 = 0LL;
      if ( v50 )
      {
        ++v6;
        LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(this, &v46, &v50);
        *((_DWORD *)v4 + 48) = LegacyTokens;
        if ( LegacyTokens >= 0 )
          continue;
      }
      goto LABEL_13;
    }
    while ( 1 )
    {
      v44[0] = 0;
      v22 = CLegacySurfaceManager::ProcessToken(
              (CLegacySurfaceManager *)v7,
              (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v14,
              v13,
              v44);
      v8 = v22;
      if ( v22 < 0 )
        break;
      if ( !v44[0] )
      {
        v22 = CLegacySurfaceManager::AddUnclaimedToken(
                (CLegacySurfaceManager *)v7,
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v14);
        v8 = v22;
        if ( v22 < 0 )
        {
          v3 = 0LL;
          v43 = 288;
          goto LABEL_70;
        }
      }
      LODWORD(v3) = v3 + 1;
      v14 += *(unsigned int *)(v14 + 4);
      if ( (unsigned int)v3 >= v46 )
        goto LABEL_12;
    }
    v3 = 0LL;
    v43 = 283;
LABEL_70:
    v42 = v22;
    goto LABEL_71;
  }
LABEL_13:
  v15 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v5,
      v6);
    v15 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  dword_18034733C += v5;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v8, 0xB9u, 0LL);
  }
  else
  {
    if ( (v15 & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start,
        v13,
        1LL,
        v56);
    v8 = 0;
    SurfaceUpdates = 0;
    v16 = 0LL;
    if ( g_pComposition )
      v16 = (CGlobalSurfaceManager *)*((_QWORD *)g_pComposition + 44);
    v47 = v16;
    FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&v47, &v48, &v51);
    if ( FrameSurfaceUpdates < 0 )
    {
      v8 = FrameSurfaceUpdates | 0x10000000;
      SurfaceUpdates = FrameSurfaceUpdates | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        (__int64)v18,
        &dword_1802DB4E0,
        3u,
        FrameSurfaceUpdates | 0x10000000,
        0xA9u,
        0LL);
    }
    if ( v8 >= 0 )
    {
      do
      {
        v19 = 0;
        if ( v48 )
        {
          v23 = v49;
          do
          {
            Buffer[1] = 0LL;
            v47 = 0LL;
            v24 = *((_QWORD *)v4 + 57) + 200LL * v19;
            Buffer[0] = *(_QWORD *)(v24 + 4);
            v25 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)v4 + 24), Buffer);
            if ( v25 )
              v3 = v25[1];
            wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::operator=(&v47, v3);
            v3 = 0LL;
            if ( v47 )
            {
              v26 = (*(__int64 (__fastcall **)(CGlobalSurfaceManager *, __int64))(*(_QWORD *)v47 + 112LL))(v47, v24);
              if ( v26 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xD4u, 0LL);
              ++v23;
            }
            v28 = *(void **)(v24 + 32);
            if ( (unsigned __int64)v28 >= 2 )
              DeleteObject(v28);
            wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v47);
            ++v19;
          }
          while ( v19 < v48 );
          v49 = v23;
          v8 = SurfaceUpdates;
        }
        if ( !v51 )
          break;
        ++v52;
        SurfaceUpdates = CGlobalSurfaceManager::GetSurfaceUpdates(v18, &v48, &v51);
        v8 = SurfaceUpdates;
      }
      while ( SurfaceUpdates >= 0 );
    }
    v20 = v49;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
        v49,
        v52);
    dword_18034733C += v20;
  }
  return (unsigned int)v8;
}
