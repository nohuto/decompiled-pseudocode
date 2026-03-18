/*
 * XREFs of DxgkShutdown @ 0x1C0301AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1C030AEB0 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkShutdown(__int64 a1, IRP *a2)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::NotifyShutdown(Global);
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
