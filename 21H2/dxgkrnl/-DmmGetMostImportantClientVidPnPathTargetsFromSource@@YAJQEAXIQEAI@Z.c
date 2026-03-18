/*
 * XREFs of ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C01A027C
 * Callers:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C001DF68 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02EF3C8 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0322E18 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C01A0358 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantClientVidPnPathTargetsFromSource(
        _QWORD *a1,
        unsigned int a2,
        unsigned int *const a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v6 = a1[349];
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v13, v7);
    v8 = *(_QWORD *)(v7 + 128);
    v12 = 0LL;
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 32));
      v9 = *(_QWORD *)(v7 + 128);
    }
    else
    {
      v9 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v12, v9);
    if ( v12 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                  (const struct DMMVIDPNTOPOLOGY *)(v12 + 96),
                                                  a2,
                                                  a3);
    }
    else
    {
      WdLogSingleEntry1(3LL, a1);
      MostImportantVidPnPathTargetsFromSource = -1071774973;
    }
    auto_rc<DMMVIDPN const>::reset(&v12, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 40));
    return MostImportantVidPnPathTargetsFromSource;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
