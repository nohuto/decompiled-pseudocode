/*
 * XREFs of DxgkShutdown @ 0x1C025D160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1C0265D58 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkShutdown(__int64 a1, IRP *a2)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2);
  DXGGLOBAL::NotifyShutdown(Global);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
