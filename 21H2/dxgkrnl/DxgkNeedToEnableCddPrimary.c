/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C02D24F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0013DA8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *a1, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v7; // rdi
  ADAPTER_DISPLAY *v8; // rcx
  struct DXGADAPTER *v9; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v11[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 7715LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pAdapterIn", 7715LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, v3, 0LL, 0LL, &v9, &v10, 0);
  if ( PairingAdapters >= 0 )
  {
    v7 = (ADAPTER_DISPLAY **)v9;
    if ( !v9 )
    {
      WdLogSingleEntry1(1LL, 7745LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 7745LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL) >= 0 )
    {
      v8 = v7[349];
      if ( !v8 )
      {
        WdLogSingleEntry1(1LL, 7759LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          7759LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v8 = v7[349];
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v8, v3, 0) && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v7[349], v3) )
        v2 = 1;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
    return v2;
  }
  else
  {
    WdLogSingleEntry3(4LL, a1, v3, PairingAdapters);
    return 0;
  }
}
