/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C0220110
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E1C0 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0133664 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  ADAPTER_DISPLAY **v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  ADAPTER_DISPLAY *v15; // rcx
  __int64 v16; // rax
  struct DXGADAPTER *v17; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v19[144]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v5 + 24) = 7604LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v17 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, (unsigned int)v3, 0LL, 0LL, &v17, &v18, 0);
  v9 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v12 = (ADAPTER_DISPLAY **)v17;
    if ( !v17 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v13 + 24) = 7634LL;
      WdLogEvent5_WdAssertion(v13);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, (struct DXGADAPTER *const)v12, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v12);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL) >= 0 )
    {
      v15 = v12[334];
      if ( !v15 )
      {
        v16 = WdLogNewEntry5_WdAssertion(0LL, v14);
        *(_QWORD *)(v16 + 24) = 7648LL;
        WdLogEvent5_WdAssertion(v16);
        v15 = v12[334];
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v15, (unsigned int)v3, 0)
        && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v12[334], (unsigned int)v3) )
      {
        v2 = 1;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19, v14);
    return v2;
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
    v10[3] = a1;
    v10[4] = v3;
    v10[5] = v9;
    WdLogEvent5_WdEvent(v10);
    return 0;
  }
}
