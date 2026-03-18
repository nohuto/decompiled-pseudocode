/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x1C0135FE8
 * Callers:
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0135F0C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C0138884 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C0136D30 (_EnforceDriverModelScalingPolicy.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(struct _LUID *a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  DXGADAPTER *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v23[144]; // [rsp+30h] [rbp-A8h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v22);
  v9 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v18 + 24) = 7850LL;
      WdLogEvent5_WdAssertion(v18);
      EnforceDriverModelScalingPolicy(v9, a2);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, v9, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23, 0LL);
      if ( v12 < 0 )
      {
        v19 = v12;
        if ( v12 == -1073741130 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v20[3] = v19;
          v20[4] = v9;
          v20[5] = *((int *)v9 + 80);
          v20[6] = *((unsigned int *)v9 + 79);
          WdLogEvent5_WdWarning(v20);
        }
        else
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
          v21[3] = v19;
          v21[4] = v9;
          v21[5] = *((int *)v9 + 80);
          v21[6] = *((unsigned int *)v9 + 79);
          WdLogEvent5_WdError(v21);
        }
      }
      else
      {
        EnforceDriverModelScalingPolicy(v9, a2);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v23);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23, v16);
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v9);
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v17 + 24) = a1->HighPart;
    *(_QWORD *)(v17 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v17);
  }
}
