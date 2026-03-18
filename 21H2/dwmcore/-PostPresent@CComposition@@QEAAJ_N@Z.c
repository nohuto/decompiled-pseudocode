/*
 * XREFs of ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18007DDA4
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180078EAC (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18007CB4C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x18007E068 (-PostPresent@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180080D48 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ?RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ @ 0x180080E48 (-RecordCompositionSurfaceUpdates@CComposition@@QEAAJXZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x180080F14 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180080F7C (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?MustUpdateExpressions@CExpressionManager@@QEBA_NXZ @ 0x180081324 (-MustUpdateExpressions@CExpressionManager@@QEBA_NXZ.c)
 *     ?AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ @ 0x18008134C (-AreAnimateUpdatesRequired@CComposition@@IEAA_NXZ.c)
 *     ?ProcessRoundTripRequest@CComposition@@AEAA_NXZ @ 0x1800813E4 (-ProcessRoundTripRequest@CComposition@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxx_EventWriteTransfer @ 0x180193E88 (McTemplateU0qqxx_EventWriteTransfer.c)
 */

__int64 __fastcall CComposition::PostPresent(CComposition *this, bool a2)
{
  CRenderTargetManager *v3; // rcx
  unsigned int v5; // ebp
  int v6; // esi
  int v7; // edi
  bool HasActiveInk; // al
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  CRenderTargetManager *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int i; // esi
  _DWORD *v22; // rdi
  int v23; // ecx
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  __int128 v25; // [rsp+38h] [rbp-60h]
  __int128 v26; // [rsp+48h] [rbp-50h]
  struct tagCOMPOSITION_TARGET_ID_AND_STATS *v27; // [rsp+58h] [rbp-40h] BYREF

  v3 = (CRenderTargetManager *)*((_QWORD *)this + 27);
  v5 = 0;
  if ( !*((_BYTE *)v3 + 581) || *((_BYTE *)v3 + 582) )
  {
    if ( *((_BYTE *)this + 1273) )
    {
      for ( i = 0; i < *((_DWORD *)this + 116); ++i )
      {
        v22 = *(_DWORD **)(*((_QWORD *)this + 55) + 8LL * i);
        if ( v22 )
        {
          v23 = v22[23];
          if ( v23 || v22[21] )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
            {
              McTemplateU0qqxx_EventWriteTransfer(
                v23,
                (unsigned int)&CHANNELANIMATIONS_ACTIVE,
                v22[4],
                v22[5],
                v23,
                v22[21]);
              v23 = v22[23];
            }
            dword_1803D31F0 += v23;
            dword_1803D31F4 += v22[21];
            v22[23] = 0;
            v22[21] = 0;
          }
        }
      }
      *((_BYTE *)this + 1273) = 0;
    }
    v6 = 0;
    if ( CComposition::ProcessRoundTripRequest(this) )
      v6 = 256;
    if ( CComposition::AreAnimateUpdatesRequired(this) )
      v6 |= 0x10u;
    v7 = v6 | 0x20;
    if ( !CExpressionManager::MustUpdateExpressions(*((CExpressionManager **)this + 53)) )
      v7 = v6;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 64LL))(*((_QWORD *)this + 28)) )
      v7 |= 0x40u;
    HasActiveInk = CSuperWetInkManager::HasActiveInk(*((CSuperWetInkManager **)this + 32));
    v9 = v7 | 0x400000;
    if ( !HasActiveInk )
      v9 = v7;
    if ( v9 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 82) + 120LL))(*((_QWORD *)this + 82), 0LL);
    v3 = (CRenderTargetManager *)*((_QWORD *)this + 27);
    CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
  }
  LOBYTE(v10) = CRenderTargetManager::PostPresent(v3, a2);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 28) + 48LL))(*((_QWORD *)this + 28), v10);
  if ( *((_QWORD *)this + 62) )
  {
    v11 = *((_QWORD *)this + 61);
    v24 = *((_QWORD *)this + 62);
    v27 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    if ( v11 )
    {
      *(_QWORD *)&v25 = *(_QWORD *)(*(_QWORD *)v11 + 64LL);
      v12 = *(_QWORD *)(*(_QWORD *)v11 + 232LL);
    }
    else
    {
      *(_QWORD *)&v25 = 0LL;
      v12 = 0LL;
    }
    *((_QWORD *)&v25 + 1) = v12;
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 152LL))(*((_QWORD *)this + 82));
    v14 = (CRenderTargetManager *)*((_QWORD *)this + 27);
    *(_QWORD *)&v26 = v13;
    v15 = CRenderTargetManager::CollectStats(v14, &v27);
    v16 = *((_QWORD *)this + 81);
    DWORD2(v26) = v15;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, &v24);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x3F5u);
      goto LABEL_24;
    }
    v19 = *((_QWORD *)this + 61);
    if ( v19 && a2 )
      *(_QWORD *)(*(_QWORD *)v19 + 24LL) = 0LL;
  }
  CComposition::UnmapDeferredSharedSectionViews(this);
LABEL_24:
  CComposition::RecordCompositionSurfaceUpdates(this);
  return v5;
}
