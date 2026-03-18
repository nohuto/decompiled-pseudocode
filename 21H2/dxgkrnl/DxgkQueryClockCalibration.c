/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C02D34B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CF06C (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _D3DKMT_QUERYCLOCKCALIBRATION *v4; // rbx
  struct _KTHREAD **Current; // rdi
  _D3DKMT_QUERYCLOCKCALIBRATION *v7; // rax
  int v8; // edi
  struct DXGADAPTER *v9; // [rsp+50h] [rbp-58h] BYREF
  DXGADAPTER *v10; // [rsp+58h] [rbp-50h] BYREF
  _D3DKMT_QUERYCLOCKCALIBRATION v11; // [rsp+68h] [rbp-40h] BYREF

  v4 = (_D3DKMT_QUERYCLOCKCALIBRATION *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( Current )
  {
    v7 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v7 = (_D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
    v11 = *v7;
    v9 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v10, v11.hAdapter, Current, &v9, 1);
    v8 = DxgkQueryClockCalibrationInternal((struct DXGPROCESS *)Current, &v11, v9);
    if ( v8 >= 0 )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
      *v4 = v11;
    }
    if ( v10 )
      DXGADAPTER::ReleaseReference(v10);
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, 9726LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 9726LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
