/*
 * XREFs of ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1C01C855C
 * Callers:
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01C8394 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001EE84 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1C01C85D4 (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
 */

DispBrokerClientHandle **__fastcall DispBrokerClient::ReferencePort(struct _KTHREAD **a1, DispBrokerClientHandle **a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  *a2 = 0LL;
  DispBrokerClientReference::Assign(a2, 0LL);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, a1 + 2, 0);
  DXGPUSHLOCK::AcquireShared(v6);
  v7 = 1;
  if ( DispBrokerClient::IsClientHandleValid((DispBrokerClient *)a1) )
    DispBrokerClientReference::Assign(a2, a1[6]);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  return a2;
}
