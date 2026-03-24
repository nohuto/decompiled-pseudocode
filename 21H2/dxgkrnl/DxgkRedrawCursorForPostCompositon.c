/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1C027E0E8
 * Callers:
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C02A2FA0 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007D94 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0121638 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0122794 (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01228E0 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 */

__int64 __fastcall DxgkRedrawCursorForPostCompositon(DXGADAPTER *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  struct _LUID v10; // rbx
  __int64 v11; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _LUID *v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // [rsp+20h] [rbp-49h]
  __int64 v34; // [rsp+28h] [rbp-41h]
  _BYTE v35[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _LUID v36; // [rsp+58h] [rbp-11h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v37[2]; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v38; // [rsp+80h] [rbp+17h] BYREF

  v2 = (unsigned int)a2;
  if ( !this )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = 1579LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + 337) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 1580LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 1581LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)this + 337);
  v10 = *(struct _LUID *)((char *)this + 316);
  v36 = v10;
  v11 = *(_QWORD *)(v9 + 112) + 3968 * v2;
  if ( !v11 )
    return -1073741811LL;
  if ( *(_BYTE *)(v11 + 725) )
  {
    v38.Flags.Value = 0;
    v38.VidPnSourceId = *(_DWORD *)(v11 + 16);
    v38.X = *(_DWORD *)(v11 + 680);
    v38.Y = *(_DWORD *)(v11 + 684);
    v38.Flags.Value = 1;
    SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(1LL, v6) + 102);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v17 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v19, v18);
      *(_QWORD *)(v17 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v17);
LABEL_22:
      v36 = 0LL;
      memset(v37, 0, sizeof(v37));
      v37[0].VidPnSourceId = 13;
      DXGADAPTER::IsAdapterSessionized(this, v20, 0LL, (unsigned __int64 *)&v36);
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(
               v37,
               v36,
               v32,
               0LL,
               v32 & v33,
               v32 & v34);
    }
    v35[0] = 0;
    v21 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v35, 0);
    v24 = v21;
    if ( v21 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v36,
                                *(_DWORD *)(v11 + 16));
      if ( SessionViewFromSource )
      {
        LODWORD(v24) = SetPointerShapeForDisplaySource(
                         (struct DISPLAY_SOURCE *)v11,
                         &v38,
                         0LL,
                         (struct SESSION_VIEW *)SessionViewFromSource,
                         0LL,
                         0,
                         0,
                         1,
                         0);
      }
      else
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
        v30[3] = *(unsigned int *)(v11 + 16);
        v30[4] = v36.HighPart;
        v30[5] = v10.LowPart;
        LODWORD(v24) = -1073741811;
        v30[6] = (unsigned int)PsGetCurrentProcessSessionId(v10.LowPart, v31);
        v30[7] = -1073741811LL;
        WdLogEvent5_WdError(v30);
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdEvent(v23, v22);
      *(_QWORD *)(v25 + 24) = v24;
      WdLogEvent5_WdEvent(v25);
    }
    if ( v35[0] )
      DxgkReleaseSessionModeChangeLock(v26, (__int64)v20);
    if ( (int)v24 < 0 )
      goto LABEL_22;
  }
  return 0LL;
}
