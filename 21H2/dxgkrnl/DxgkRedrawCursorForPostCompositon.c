/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1C032DE78
 * Callers:
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C0318850 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01A52B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkRedrawCursorForPostCompositon(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  struct _LUID v5; // rbx
  __int64 v6; // r14
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  unsigned int v10; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v12; // eax
  int v13; // esi
  struct _LUID *v14; // rdx
  struct SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v16; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 HighPart; // rdi
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // r8
  _BYTE v25[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _LUID v26; // [rsp+58h] [rbp-11h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v27[2]; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v28; // [rsp+80h] [rbp+17h] BYREF

  v2 = a2;
  if ( !this )
  {
    WdLogSingleEntry1(1LL, 1602LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1602LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 349) )
  {
    WdLogSingleEntry1(1LL, 1603LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1603LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry1(1LL, 1604LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDisplayAdapter->IsCoreResourceSharedOwner()",
      1604LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this + 349);
  v5 = *(struct _LUID *)((char *)this + 404);
  v26 = v5;
  v6 = *(_QWORD *)(v4 + 128) + 4000 * v2;
  if ( !v6 )
    return -1073741811LL;
  if ( !*(_BYTE *)(v6 + 765) )
    return 0LL;
  v28.Flags.Value = 0;
  v28.VidPnSourceId = *(_DWORD *)(v6 + 16);
  v28.X = *(_DWORD *)(v6 + 716);
  v28.Y = *(_DWORD *)(v6 + 720);
  v28.Flags.Value = 1;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v9
    && (v10 = PsGetCurrentProcessSessionId(v8),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v10)) != 0LL) )
  {
    v25[0] = 0;
    v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v25, 0);
    v13 = v12;
    if ( v12 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v26,
                                *(_DWORD *)(v6 + 16));
      if ( SessionViewFromSource )
      {
        v13 = SetPointerShapeForDisplaySource(
                (struct DISPLAY_SOURCE *)v6,
                &v28,
                0LL,
                SessionViewFromSource,
                0LL,
                0,
                0,
                1,
                0,
                0);
      }
      else
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16);
        HighPart = v26.HighPart;
        v13 = -1073741811;
        WdLogSingleEntry5(
          2LL,
          *(unsigned int *)(v6 + 16),
          v26.HighPart,
          v5.LowPart,
          CurrentProcessSessionId,
          -1073741811LL);
        v20 = PsGetCurrentProcessSessionId(v19);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, r"
                    "eturning 0x%I64x.",
          *(unsigned int *)(v6 + 16),
          HighPart,
          v5.LowPart,
          v20,
          -1073741811LL);
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, v12);
    }
    if ( v25[0] )
      DxgkReleaseSessionModeChangeLock();
    if ( v13 >= 0 )
      return 0LL;
  }
  else
  {
    v21 = PsGetCurrentProcessSessionId(v8);
    WdLogSingleEntry2(2LL, v21, -1073741811LL);
    v23 = PsGetCurrentProcessSessionId(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v23,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  v26 = 0LL;
  memset(v27, 0, sizeof(v27));
  v27[0].VidPnSourceId = 13;
  DXGADAPTER::IsAdapterSessionized(this, v14, 0LL, (unsigned __int64 *)&v26);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(
           v27,
           v26,
           v24,
           0LL,
           0LL,
           0LL);
}
