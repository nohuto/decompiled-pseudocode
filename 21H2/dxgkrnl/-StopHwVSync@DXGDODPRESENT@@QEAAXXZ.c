/*
 * XREFs of ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C03BF118
 * Callers:
 *     ?StopVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAXXZ @ 0x1C03BF970 (-StopVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C019E994 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 */

void __fastcall DXGDODPRESENT::StopHwVSync(struct _KTHREAD **this)
{
  int v2; // eax
  int v3; // eax
  _BYTE v4[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 13, 0);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v2 = *((_DWORD *)this + 34);
  v6 = 2;
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(1LL, 4217LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OutStandingHwVsyncRequests >= 0",
      4217LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v2 = *((_DWORD *)this + 34);
  }
  v3 = v2 - 1;
  *((_DWORD *)this + 34) = v3;
  if ( !v3
    && (int)DXGADAPTER::DdiControlInterrupt(
              *((DXGADAPTER **)this[11] + 2),
              DXGK_INTERRUPT_DISPLAYONLY_VSYNC,
              0LL,
              0xFFFFFFFD) < 0 )
  {
    WdLogSingleEntry1(1LL, 4224LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 4224LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
