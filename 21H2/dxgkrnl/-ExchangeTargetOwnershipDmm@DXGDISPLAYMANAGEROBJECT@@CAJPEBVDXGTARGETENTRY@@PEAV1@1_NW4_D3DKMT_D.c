/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F3E04
 * Callers:
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01DE65C (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F3954 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C02F422C (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C02F4638 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C01A03F0 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02F37F4 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1C03986D4 (DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        struct _LUID *a1,
        struct _LUID a2,
        __int64 a3,
        char a4,
        int a5)
{
  struct _LUID v5; // rbx
  struct DXGADAPTER *v10; // rsi
  unsigned int v11; // edi
  unsigned int LowPart; // edx
  unsigned int TargetUsage; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  _BYTE v21[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v24[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v26[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a1[3];
  v24[0] = 0LL;
  v22 = v5;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v24, &v22);
  v10 = v24[0];
  if ( v24[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v24[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL) < 0 || !*((_QWORD *)v10 + 349) )
    {
      WdLogSingleEntry2(3LL, v22.HighPart, v5.LowPart);
      v11 = -1073741275;
LABEL_15:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      goto LABEL_16;
    }
    if ( a4 && *(_QWORD *)&a2 )
    {
      LowPart = a1[4].LowPart;
      v21[0] = 0;
      TargetUsage = DmmGetTargetUsage((__int64)v10, LowPart, v21);
      if ( TargetUsage != a5 )
      {
        WdLogSingleEntry4(3LL, v22.HighPart, v5.LowPart, a1[4].LowPart, a5);
        v11 = -1073741267;
        goto LABEL_15;
      }
      LOBYTE(v14) = v21[0];
      v17 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage, v14, v15, v16);
      v11 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry4(3LL, v22.HighPart, v5.LowPart, a1[4].LowPart, v17);
        goto LABEL_15;
      }
    }
    v18 = a1[4].LowPart;
    v25[0] = &v22;
    v23 = a3;
    v25[1] = &v23;
    v22 = a2;
    v19 = DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(v10, v18, v25);
    v11 = v19;
    if ( v19 >= 0 )
      v11 = 0;
    else
      WdLogSingleEntry1(3LL, v19);
    goto LABEL_15;
  }
  WdLogSingleEntry2(3LL, v22.HighPart, v5.LowPart);
  v11 = -1073741275;
LABEL_16:
  DXGADAPTER_REFERENCE::Assign(v24, 0LL);
  return v11;
}
