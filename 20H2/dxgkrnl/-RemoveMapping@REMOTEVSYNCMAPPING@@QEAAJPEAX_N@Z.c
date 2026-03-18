/*
 * XREFs of ?RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAX_N@Z @ 0x1C004E7A8
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020E8D4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C02846F0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_ed8f9bca20cd5704cf0fee5400ab1066___ @ 0x1C004E284 (REMOTEVSYNCMAPPING--RemoveMappingInternal__lambda_ed8f9bca20cd5704cf0fee5400ab1066___.c)
 */

__int64 __fastcall REMOTEVSYNCMAPPING::RemoveMapping(REMOTEVSYNCMAPPING *this, void *a2)
{
  void *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_ed8f9bca20cd5704cf0fee5400ab1066___(this, &v3);
}
