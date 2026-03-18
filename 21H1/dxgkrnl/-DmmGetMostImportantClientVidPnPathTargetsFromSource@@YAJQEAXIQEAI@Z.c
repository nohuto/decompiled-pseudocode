/*
 * XREFs of ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C012ECE0
 * Callers:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0011824 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01176F0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C012EDA4 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantClientVidPnPathTargetsFromSource(_QWORD *a1, __int64 a2, unsigned int *const a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_14:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  v6 = a1[334];
  if ( !v6 )
  {
    v16 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v16 + 24) = a1;
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(v6 + 88);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, v7);
    v8 = *(_QWORD *)(v7 + 88);
    v19 = 0LL;
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 32));
      v9 = *(_QWORD *)(v7 + 88);
    }
    else
    {
      v9 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v19, v9);
    if ( v19 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                  (const struct DMMVIDPNTOPOLOGY *)(v19 + 96),
                                                  v4,
                                                  a3);
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(0LL, v10, v11);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdWarning(v18);
      MostImportantVidPnPathTargetsFromSource = -1071774973;
    }
    auto_rc<DMMVIDPN const>::reset(&v19, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40), v13);
    return MostImportantVidPnPathTargetsFromSource;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
