/*
 * XREFs of DXGKCALLONEXIT__lambda_30a6a07a63a58fd3d0bab754eb0ae139___ @ 0x1C005D22C
 * Callers:
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F55D0 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_30a6a07a63a58fd3d0bab754eb0ae139_(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
