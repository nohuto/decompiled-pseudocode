/*
 * XREFs of ?GetRoutingInfo@DWMInputTarget@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x18001C420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::GetRoutingInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1
  __int64 v4; // xmm0_8

  result = a2;
  v3 = *(_OWORD *)(a1 + 88);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 104);
  *(_OWORD *)(a2 + 16) = v3;
  *(_QWORD *)(a2 + 32) = v4;
  return result;
}
