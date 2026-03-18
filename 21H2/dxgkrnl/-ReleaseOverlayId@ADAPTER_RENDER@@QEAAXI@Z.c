/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C02C430C
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0329070 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 2132LL) )
  {
    WdLogSingleEntry1(1LL, 3074LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"OverlayId < GetAdapter()->m_DriverCaps.MaxOverlays",
      3074LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + v3 + 89) )
  {
    WdLogSingleEntry1(1LL, 3075LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OverlayOwner[OverlayId] != NULL",
      3075LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_QWORD *)this + v3 + 89) = 0LL;
}
