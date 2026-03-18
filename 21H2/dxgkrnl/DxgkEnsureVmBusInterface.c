/*
 * XREFs of DxgkEnsureVmBusInterface @ 0x1C030D2CC
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C01F4EF0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0309F70 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 */

__int64 DxgkEnsureVmBusInterface()
{
  DXGGLOBAL *Global; // rax
  int v1; // eax
  __int64 v2; // rdi

  Global = DXGGLOBAL_GetGlobal();
  v1 = DXGGLOBAL::EnsureVmBusInterface(Global);
  v2 = v1;
  if ( v1 < 0 )
  {
    WdLogSingleEntry1(2LL, v1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create global VM bus channel, returning 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v2;
}
