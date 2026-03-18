/*
 * XREFs of ?GetRenderTargetInfo@CLegacyRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800F9F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 + 18296);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 18280);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
