/*
 * XREFs of DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___ @ 0x1C001963C
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C0152B78 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C0152ED8 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0256B4C (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570_(__int64 a1, _OWORD *a2)
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
