/*
 * XREFs of ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C015BAD8
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C011E8E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0121C90 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0123560 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(DXGADAPTER *a1, __int64 a2, unsigned int a3, unsigned __int8 *a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct VIDPN_MGR *v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v6 = (unsigned int)a2;
  if ( !a4 )
  {
    v24 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v24 + 24) = 0LL;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v25 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v25 + 24) = 0LL;
LABEL_18:
    WdLogEvent5_WdError(v25);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v26);
  }
  v10 = *((_QWORD *)a1 + 337);
  if ( !v10 )
  {
    v25 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v25 + 24) = a1;
    goto LABEL_18;
  }
  v11 = *(struct VIDPN_MGR **)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v30, (__int64)v11);
    v31 = 0LL;
    v12 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, &v31);
    v15 = v12;
    if ( v12 < 0 )
    {
      v28 = WdLogNewEntry5_WdDmmEvent(v14, v13);
      *(_QWORD *)(v28 + 24) = v15;
      WdLogEvent5_WdDmmEvent(v28);
    }
    else
    {
      v16 = v31 + 96;
      v17 = VIDPN_MGR::AddPathToVidPnTopology(
              v11,
              (struct DMMVIDPNTOPOLOGY *const)(v31 + 96),
              v6,
              v4,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v15 = v17;
      if ( v17 == -1071774976 || v17 == -1071774975 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19, v18);
        v20[3] = v6;
        v20[4] = v4;
        v20[5] = v16;
        WdLogEvent5_WdDmmEvent(v20);
        v21 = 0;
      }
      else
      {
        if ( v17 < 0 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
          v29[3] = v6;
          v29[4] = v4;
          v29[5] = v16;
          v29[6] = v15;
          WdLogEvent5_WdError(v29);
          goto LABEL_11;
        }
        v21 = 1;
      }
      *a4 = v21;
      LODWORD(v15) = 0;
    }
LABEL_11:
    auto_rc<DMMVIDPN>::reset(&v31, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v30 + 40), v22);
    return (unsigned int)v15;
  }
  v27 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v27 + 24) = a1;
  WdLogEvent5_WdError(v27);
  return 3223192373LL;
}
