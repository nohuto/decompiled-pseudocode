/*
 * XREFs of ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C003E75C
 * Callers:
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C0231BF0 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C02332A0 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall DXGVIRTUALMACHINE::ResetVirtualGpu(struct _KTHREAD **this)
{
  struct _KTHREAD **v1; // rbx
  bool v2; // zf
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v1 = this;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 12, 0);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v2 = (*((_DWORD *)v1 + 1))-- == 1;
  v6 = 2;
  LOBYTE(v1) = v2;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
  return (unsigned __int8)v1;
}
