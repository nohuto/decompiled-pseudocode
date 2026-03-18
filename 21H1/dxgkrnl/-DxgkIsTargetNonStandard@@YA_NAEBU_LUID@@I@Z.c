/*
 * XREFs of ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C013BAA0
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C013AD88 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C013BB78 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 */

bool __fastcall DxgkIsTargetNonStandard(const struct _LUID *a1, __int64 a2)
{
  unsigned int v2; // r14d
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool IsTargetNonStandard; // di
  DXGADAPTER *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 LowPart; // rcx
  unsigned __int64 v19; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v20[144]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v19);
  IsTargetNonStandard = 0;
  v9 = v5;
  if ( v5 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v5, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v9);
    v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
    v13 = v10;
    if ( v10 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v17[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v17[5] = v13;
    }
    else
    {
      if ( *((_QWORD *)v9 + 334) )
      {
        IsTargetNonStandard = DmmIsTargetNonStandard(v9, v2);
LABEL_5:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20, v14);
        return IsTargetNonStandard;
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v17[3] = a1->HighPart;
      LowPart = a1->LowPart;
      v17[5] = -1073741811LL;
    }
    v17[4] = LowPart;
    WdLogEvent5_WdError(v17);
    goto LABEL_5;
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
  v16[3] = a1->HighPart;
  v16[4] = a1->LowPart;
  v16[5] = -1073741811LL;
  WdLogEvent5_WdError(v16);
  return 0;
}
