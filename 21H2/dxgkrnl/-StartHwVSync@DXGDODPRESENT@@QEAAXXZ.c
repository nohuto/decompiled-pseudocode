/*
 * XREFs of ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C03BEFFC
 * Callers:
 *     ?StartVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C03BF920 (-StartVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C019E994 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 */

void __fastcall DXGDODPRESENT::StartHwVSync(struct _KTHREAD **this)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax
  _BYTE v5[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 13, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  v3 = *((_DWORD *)this + 34);
  v7 = 2;
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(1LL, 4199LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OutStandingHwVsyncRequests >= 0",
      4199LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v3 = *((_DWORD *)this + 34);
  }
  v4 = v3 + 1;
  *((_DWORD *)this + 34) = v4;
  if ( v4 == 1 )
  {
    LOBYTE(v2) = 1;
    if ( (int)DXGADAPTER::DdiControlInterrupt(
                *((DXGADAPTER **)this[11] + 2),
                DXGK_INTERRUPT_DISPLAYONLY_VSYNC,
                v2,
                0xFFFFFFFD) < 0 )
    {
      WdLogSingleEntry1(1LL, 4207LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 4207LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
