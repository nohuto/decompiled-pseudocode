/*
 * XREFs of DxgkRedrawCursorForPostCompositon @ 0x1C0279A08
 * Callers:
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C029E5D0 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0011FD8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C0114C30 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
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
  __int64 v18; // rcx
  struct _LUID *v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rdi
  __int64 v30; // r8
  __int64 v31; // [rsp+20h] [rbp-49h]
  __int64 v32; // [rsp+28h] [rbp-41h]
  _BYTE v33[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _LUID v34; // [rsp+58h] [rbp-11h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v35[2]; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v36; // [rsp+80h] [rbp+17h] BYREF

  v2 = (unsigned int)a2;
  if ( !this )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = 1579LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + 334) )
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
  v9 = *((_QWORD *)this + 334);
  v10 = *(struct _LUID *)((char *)this + 316);
  v34 = v10;
  v11 = *(_QWORD *)(v9 + 112) + 3968 * v2;
  if ( !v11 )
    return -1073741811LL;
  if ( *(_BYTE *)(v11 + 725) )
  {
    v36.Flags.Value = 0;
    v36.VidPnSourceId = *(_DWORD *)(v11 + 16);
    v36.X = *(_DWORD *)(v11 + 680);
    v36.Y = *(_DWORD *)(v11 + 684);
    v36.Flags.Value = 1;
    SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(1LL, v6) + 88);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v17 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v18);
      *(_QWORD *)(v17 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v17);
LABEL_22:
      v34 = 0LL;
      memset(v35, 0, sizeof(v35));
      v35[0].VidPnSourceId = 13;
      DXGADAPTER::IsAdapterSessionized(this, v19, 0LL, (unsigned __int64 *)&v34);
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(
               v35,
               v34,
               v30,
               0LL,
               v30 & v31,
               v30 & v32);
    }
    v33[0] = 0;
    v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v33, 0);
    v23 = v20;
    if ( v20 >= 0 )
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v34,
                                *(_DWORD *)(v11 + 16));
      if ( SessionViewFromSource )
      {
        LODWORD(v23) = SetPointerShapeForDisplaySource(
                         (struct DISPLAY_SOURCE *)v11,
                         &v36,
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
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
        v29[3] = *(unsigned int *)(v11 + 16);
        v29[4] = v34.HighPart;
        v29[5] = v10.LowPart;
        LODWORD(v23) = -1073741811;
        v29[6] = (unsigned int)PsGetCurrentProcessSessionId(v10.LowPart);
        v29[7] = -1073741811LL;
        WdLogEvent5_WdError(v29);
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdEvent(v22, v21);
      *(_QWORD *)(v24 + 24) = v23;
      WdLogEvent5_WdEvent(v24);
    }
    if ( v33[0] )
      DxgkReleaseSessionModeChangeLock(v25, (__int64)v19);
    if ( (int)v23 < 0 )
      goto LABEL_22;
  }
  return 0LL;
}
