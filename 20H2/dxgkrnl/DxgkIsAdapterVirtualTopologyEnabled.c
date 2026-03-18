/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C0118A2C
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01290D0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007050 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGADAPTER *const v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  LONG HighPart; // [rsp+24h] [rbp-C4h]
  unsigned __int64 v23; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v24[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v25[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v26[72]; // [rsp+78h] [rbp-70h] BYREF

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, (__int64)a2);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v23);
  v8 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v19 + 24) = 9444LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v24[1] = 0;
    COREACCESS::COREACCESS((COREACCESS *)v25, v8);
    COREACCESS::COREACCESS((COREACCESS *)v26, v11);
    DXGADAPTER::ReleaseReference(v8);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
    v15 = v12;
    if ( v12 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v20[3] = HighPart;
      v20[4] = a1.LowPart;
      v20[5] = v15;
      WdLogEvent5_WdError(v20);
    }
    else
    {
      v16 = *((_QWORD *)v8 + 337);
      if ( v16 )
      {
        *a2 = *(unsigned __int8 *)(v16 + 250);
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v21 + 24) = 9466LL;
        WdLogEvent5_WdError(v21);
        LODWORD(v15) = -1073741811;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24, v13);
    return (unsigned int)v15;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v18 + 24) = HighPart;
    *(_QWORD *)(v18 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
}
