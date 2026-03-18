/*
 * XREFs of DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded___ @ 0x1C00146E8
 * Callers:
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01C8394 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C01C8648 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded_(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1

  result = a1;
  v3 = a2[1];
  *(_OWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 32) = 1;
  *(_OWORD *)(a1 + 16) = v3;
  return result;
}
