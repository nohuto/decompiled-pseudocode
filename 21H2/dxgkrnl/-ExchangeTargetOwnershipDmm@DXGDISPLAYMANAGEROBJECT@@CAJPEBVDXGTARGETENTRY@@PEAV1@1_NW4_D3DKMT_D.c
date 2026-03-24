/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B1440
 * Callers:
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01672AC (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B1080 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C02B18E8 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C02B1C0C (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009FFC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C0121E6C (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02B0F44 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1C02DA330 (DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        struct _LUID *a1,
        struct _LUID a2,
        __int64 a3,
        char a4,
        int a5)
{
  struct _LUID v5; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 LowPart; // rdx
  unsigned int TargetUsage; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  _BYTE v37[8]; // [rsp+20h] [rbp-B1h] BYREF
  struct _LUID v38; // [rsp+28h] [rbp-A9h] BYREF
  __int64 v39; // [rsp+30h] [rbp-A1h] BYREF
  struct DXGADAPTER *v40[3]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v41[2]; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v42[144]; // [rsp+60h] [rbp-71h] BYREF

  v5 = a1[3];
  v40[0] = 0LL;
  v38 = v5;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v40, &v38);
  v13 = v40[0];
  if ( v40[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v42, v40[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42, 0LL) < 0 || !*((_QWORD *)v13 + 337) )
    {
      v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v19 + 24) = v38.HighPart;
      *(_QWORD *)(v19 + 32) = v5.LowPart;
      WdLogEvent5_WdWarning(v19);
      LODWORD(v15) = -1073741275;
LABEL_16:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42, v20);
      goto LABEL_17;
    }
    if ( !a4 || !*(_QWORD *)&a2 )
      goto LABEL_12;
    LowPart = a1[4].LowPart;
    v37[0] = 0;
    TargetUsage = DmmGetTargetUsage((__int64)v13, LowPart, v37);
    if ( TargetUsage != a5 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v26[3] = v38.HighPart;
      v26[4] = v5.LowPart;
      v26[5] = a1[4].LowPart;
      v26[6] = a5;
      WdLogEvent5_WdWarning(v26);
      LODWORD(v15) = -1073741267;
      goto LABEL_16;
    }
    LOBYTE(v23) = v37[0];
    v27 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage, v23);
    v15 = v27;
    if ( v27 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v31[3] = v38.HighPart;
      v31[4] = v5.LowPart;
      v31[5] = a1[4].LowPart;
      v31[6] = v15;
    }
    else
    {
LABEL_12:
      v32 = a1[4].LowPart;
      v41[0] = &v38;
      v39 = a3;
      v41[1] = &v39;
      v38 = a2;
      v33 = DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(v13, v32, v41);
      v15 = v33;
      if ( v33 >= 0 )
      {
        LODWORD(v15) = 0;
        goto LABEL_16;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v20, v35);
      v31[3] = v15;
    }
    WdLogEvent5_WdWarning(v31);
    goto LABEL_16;
  }
  v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v14 + 24) = v38.HighPart;
  *(_QWORD *)(v14 + 32) = v5.LowPart;
  WdLogEvent5_WdWarning(v14);
  LODWORD(v15) = -1073741275;
LABEL_17:
  DXGADAPTER_REFERENCE::Assign(v40, 0LL);
  return (unsigned int)v15;
}
