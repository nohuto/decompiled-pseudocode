/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1C016E690
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C001AFB4 (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011F70C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, __int64 a2, struct _LUID *a3)
{
  __int64 v3; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rdi
  __int64 PairingAdapters; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGADAPTER *v25; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v27[144]; // [rsp+50h] [rbp-B8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v19 + 24) = 7733LL;
LABEL_16:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v19 + 24) = 7740LL;
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)&v25);
  if ( !v9 )
  {
    v19 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v19 + 24) = a1->HighPart;
    *(_QWORD *)(v19 + 32) = a1->LowPart;
    goto LABEL_16;
  }
  v25 = 0LL;
  PairingAdapters = (int)DxgkpGetPairingAdapters(v9, (unsigned int)v3, 0LL, 0LL, &v25, &v26, 0);
  DXGADAPTER::ReleaseReference(v9);
  if ( (int)PairingAdapters < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
    v20[3] = 0LL;
    v20[4] = v3;
    v20[5] = PairingAdapters;
    WdLogEvent5_WdEvent(v20);
  }
  else
  {
    v13 = v25;
    if ( !v25 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v21 + 24) = 7787LL;
      WdLogEvent5_WdAssertion(v21);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v13, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL);
    DXGADAPTER::ReleaseReference(v13);
    if ( (int)PairingAdapters < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v22 + 24) = v13;
      *(_QWORD *)(v22 + 32) = PairingAdapters;
      WdLogEvent5_WdError(v22);
    }
    else
    {
      v16 = *((_QWORD *)v13 + 337);
      if ( !v16 )
      {
        v23 = WdLogNewEntry5_WdAssertion(0LL, v14);
        *(_QWORD *)(v23 + 24) = 7809LL;
        WdLogEvent5_WdAssertion(v23);
        v16 = *((_QWORD *)v13 + 337);
      }
      if ( (unsigned int)v3 >= *(_DWORD *)(v16 + 80) )
      {
        v24 = WdLogNewEntry5_WdError(v16, v14);
        *(_QWORD *)(v24 + 24) = v3;
        *(_QWORD *)(v24 + 32) = v13;
        WdLogEvent5_WdError(v24);
        LODWORD(PairingAdapters) = -1073741811;
      }
      else
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v16, v3, a3);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27, v17);
  }
  return (unsigned int)PairingAdapters;
}
