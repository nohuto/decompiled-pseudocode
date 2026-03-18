/*
 * XREFs of ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C0127FEC
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01266E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0128A60 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(DXGADAPTER *a1, __int64 a2, unsigned int a3, unsigned __int8 *a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct VIDPN_MGR *v11; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int8 v20; // al
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // [rsp+40h] [rbp-28h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v6 = (unsigned int)a2;
  if ( !a4 )
  {
    v23 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v23 + 24) = 0LL;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v24 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v24 + 24) = 0LL;
LABEL_18:
    WdLogEvent5_WdError(v24);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v25);
  }
  v10 = *((_QWORD *)a1 + 334);
  if ( !v10 )
  {
    v24 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v24 + 24) = a1;
    goto LABEL_18;
  }
  v11 = *(struct VIDPN_MGR **)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, (__int64)v11);
    v30 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11);
    v14 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v27 = WdLogNewEntry5_WdDmmEvent(v13);
      *(_QWORD *)(v27 + 24) = v14;
      WdLogEvent5_WdDmmEvent(v27);
    }
    else
    {
      v15 = v30 + 96;
      v16 = VIDPN_MGR::AddPathToVidPnTopology(
              v11,
              (struct DMMVIDPNTOPOLOGY *const)(v30 + 96),
              v6,
              v4,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v14 = v16;
      if ( v16 == -1071774976 || v16 == -1071774975 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18);
        v19[3] = v6;
        v19[4] = v4;
        v19[5] = v15;
        WdLogEvent5_WdDmmEvent(v19);
        v20 = 0;
      }
      else
      {
        if ( v16 < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
          v28[3] = v6;
          v28[4] = v4;
          v28[5] = v15;
          v28[6] = v14;
          WdLogEvent5_WdError(v28);
          goto LABEL_11;
        }
        v20 = 1;
      }
      *a4 = v20;
      LODWORD(v14) = 0;
    }
LABEL_11:
    auto_rc<DMMVIDPN>::reset(&v30, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40), v21);
    return (unsigned int)v14;
  }
  v26 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v26 + 24) = a1;
  WdLogEvent5_WdError(v26);
  return 3223192373LL;
}
