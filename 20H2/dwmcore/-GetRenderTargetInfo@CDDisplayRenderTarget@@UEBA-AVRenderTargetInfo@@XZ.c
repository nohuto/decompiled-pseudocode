/*
 * XREFs of ?GetRenderTargetInfo@CDDisplayRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800DDE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 + 18468);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 18452);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
