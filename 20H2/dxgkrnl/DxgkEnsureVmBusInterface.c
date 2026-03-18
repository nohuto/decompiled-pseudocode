/*
 * XREFs of DxgkEnsureVmBusInterface @ 0x1C026AE40
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0197A80 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0268208 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkEnsureVmBusInterface(__int64 a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v3 = DXGGLOBAL::EnsureVmBusInterface(Global);
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v6;
}
