/*
 * XREFs of ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A5E04
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C019C468 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A2B7C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01A2BF0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01A3020 (-HandleInertiaTimer@CPTPProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C006B860 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_s @ 0x1C0155A3C (WPP_RECORDER_SF_s.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01830B0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C01833DC (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01A6268 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C01A63C0 (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 *     ApiSetEditionPostInertiaMessage @ 0x1C01C9788 (ApiSetEditionPostInertiaMessage.c)
 */

char __fastcall CInertiaManager::PostInertiaMessage(
        CInertiaManager *this,
        unsigned int a2,
        const struct INERTIA_INFO_INTERNAL *a3,
        struct tagPOINT a4,
        struct tagPOINT a5)
{
  const char *v9; // rax
  int v10; // eax
  CInertiaManager *v11; // rcx
  int v12; // edx
  char v13; // di
  int v14; // r9d
  int v15; // r10d
  int v16; // r9d
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  int v21; // edx
  __m128i v22; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+40h] [rbp-C0h]
  __int128 v24; // [rsp+50h] [rbp-B0h]
  __int128 v25; // [rsp+60h] [rbp-A0h]
  __int128 v26; // [rsp+70h] [rbp-90h]
  __int128 v27; // [rsp+80h] [rbp-80h]
  __int128 v28; // [rsp+90h] [rbp-70h]
  _OWORD v29[7]; // [rsp+B0h] [rbp-50h] BYREF

  if ( a2 - 571 > 1 )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = "STOP";
    if ( a2 != 571 )
      v9 = "END";
    WPP_RECORDER_SF_s(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      21,
      10,
      (__int64)&WPP_4495bc41948135baabf94c3bf2d1a5b7_Traceguids,
      (__int64)v9);
  }
  v10 = *((_DWORD *)a3 + 46);
  if ( (v10 & 0x10) == 0 )
  {
    CInputDest::CInputDest(&v22, *((_QWORD *)a3 + 15), 2 - ((v10 & 0x20) != 0), 1);
    v13 = 0;
    if ( CInertiaManager::ValidateInertiaDest(v11, (const struct CInputDest *)&v22) )
    {
      v15 = *((_DWORD *)a3 + 46);
      v16 = -__CFSHR__(v15, 2);
      if ( !__CFSHR__(v15, 2) || CInputDest::HasDelegationThread((CInputDest *)&v22) )
      {
        if ( (v15 & 0x20) != 0 )
        {
          v17 = *((_OWORD *)a3 + 8);
          v22.m128i_i32[0] |= 2u;
          v18 = *((_OWORD *)a3 + 9);
          *((_QWORD *)&v23 + 1) = 0LL;
          v19 = *((_OWORD *)a3 + 10);
          v24 = v17;
          v25 = v18;
          v26 = v19;
        }
        else
        {
          v19 = v26;
          v18 = v25;
          v17 = v24;
        }
        v29[0] = v22;
        v29[1] = v23;
        v29[5] = v27;
        v29[6] = v28;
        v29[2] = v17;
        v29[3] = v18;
        v29[4] = v19;
        if ( !v16 )
        {
          if ( !(unsigned int)ApiSetEditionPostInertiaMessage((unsigned int)v29, a2, *((_QWORD *)a3 + 1), a4.x, 0LL)
            && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = 2;
            WPP_RECORDER_SF_(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v21,
              21,
              14,
              (__int64)&WPP_4495bc41948135baabf94c3bf2d1a5b7_Traceguids);
          }
          CInputDest::SetEmpty((CInputDest *)&v22);
          return 1;
        }
        DelegateThreadInfo = CInputDest::GetDelegateThreadInfo((CInputDest *)&v22);
        if ( (unsigned int)ApiSetEditionPostInertiaMessage(
                             (unsigned int)v29,
                             a2,
                             *((_QWORD *)a3 + 1),
                             a4.x,
                             (__int64)DelegateThreadInfo) )
        {
          v13 = 1;
          goto LABEL_25;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 13;
          goto LABEL_16;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 12;
        goto LABEL_16;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 11;
LABEL_16:
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v12,
        21,
        v14,
        (__int64)&WPP_4495bc41948135baabf94c3bf2d1a5b7_Traceguids);
    }
LABEL_25:
    CInputDest::SetEmpty((CInputDest *)&v22);
    return v13;
  }
  CInertiaManager::RouteSyntheticTouchpadToMT(this, a2, a4, a5, *((_QWORD *)a3 + 1));
  return 1;
}
