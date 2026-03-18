/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1C01E7910
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C001EA94 (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, unsigned int a2, struct _LUID *a3)
{
  __int64 v3; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rsi
  __int64 PairingAdapters; // rdi
  struct DXGADAPTER *v9; // rbp
  __int64 v10; // rcx
  __int64 v12; // rbx
  const wchar_t *v13; // r9
  struct DXGADAPTER *v14; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-C8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v12 = 7837LL;
    WdLogSingleEntry1(2LL, 7837LL);
    v13 = L"Caller specified a NULL pointer to DxgkAdapter LUID in DxgkQueryModeListCacheLuid function.";
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v12 = 7844LL;
    WdLogSingleEntry1(2LL, 7844LL);
    v13 = L"Caller specified a NULL pointer in pModeListCacheLuid in DxgkQueryModeListCacheLuid function.";
    goto LABEL_16;
  }
  Global = DXGGLOBAL_GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)&v14);
  if ( !v7 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkQueryModeListCacheLuid function.",
      a1->HighPart,
      a1->LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = 0LL;
  PairingAdapters = (int)DxgkpGetPairingAdapters(v7, v3, 0LL, 0LL, &v14, &v15, 0);
  DXGADAPTER::ReleaseReference(v7);
  if ( (int)PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, 0LL, v3, PairingAdapters);
  }
  else
  {
    v9 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry1(1LL, 7891LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 7891LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v9, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
    DXGADAPTER::ReleaseReference(v9);
    if ( (int)PairingAdapters < 0 )
    {
      WdLogSingleEntry2(2LL, v9, PairingAdapters);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared lock on DxgkAdapter 0x%I64x (Status = 0x%I64x).",
        (__int64)v9,
        PairingAdapters,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v10 = *((_QWORD *)v9 + 349);
      if ( !v10 )
      {
        WdLogSingleEntry1(1LL, 7913LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          7913LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v10 = *((_QWORD *)v9 + 349);
      }
      if ( (unsigned int)v3 >= *(_DWORD *)(v10 + 96) )
      {
        WdLogSingleEntry2(2LL, v3, v9);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified an invalid VidPnSourceId 0x%I64x on DxgAdapter 0x%I64x.",
          v3,
          (__int64)v9,
          0LL,
          0LL,
          0LL);
        LODWORD(PairingAdapters) = -1073741811;
      }
      else
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v10, v3, a3);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
  }
  return (unsigned int)PairingAdapters;
}
