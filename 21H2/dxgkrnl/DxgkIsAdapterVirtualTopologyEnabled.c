/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C015C678
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01658E0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  struct DXGADAPTER *v6; // rsi
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 LowPart; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbp
  const wchar_t *v14; // r9
  LONG HighPart; // [rsp+54h] [rbp-C4h]
  unsigned __int64 v16; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v17[144]; // [rsp+60h] [rbp-B8h] BYREF

  HighPart = a1.HighPart;
  Global = DXGGLOBAL_GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v16);
  v6 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      WdLogSingleEntry1(1LL, 9573LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!pAdapterIn->IsCoreResourceSharedOwner()",
        9573LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v6, 0LL);
    DXGADAPTER::ReleaseReference(v6);
    v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      LowPart = a1.LowPart;
      v12 = HighPart;
      v13 = v7;
      WdLogSingleEntry3(2LL, HighPart, (unsigned int)LowPart, v7);
      v14 = L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)";
    }
    else
    {
      v9 = *((_QWORD *)v6 + 349);
      if ( v9 )
      {
        *a2 = *(unsigned __int8 *)(v9 + 290);
LABEL_7:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
        return v8;
      }
      v12 = 9595LL;
      WdLogSingleEntry1(2LL, 9595LL);
      LowPart = 0LL;
      v14 = L"The selected adapter is render-only";
      v13 = 0LL;
      v8 = -1073741811;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v12, LowPart, v13, 0LL, 0LL);
    goto LABEL_7;
  }
  WdLogSingleEntry2(2LL, HighPart, a1.LowPart);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsAdapterVirtualTopologyEnabled function.",
    HighPart,
    a1.LowPart,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
