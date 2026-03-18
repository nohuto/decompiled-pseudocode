/*
 * XREFs of DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c___ @ 0x1C0024644
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0226618 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_412e717f5b4824a72ec987e49bacdc3c_(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int128 v4; // xmm1

  v2 = *a2;
  *(_BYTE *)(a1 + 40) = 1;
  result = a1;
  v4 = a2[1];
  *(_OWORD *)a1 = v2;
  *(_QWORD *)&v2 = *((_QWORD *)a2 + 4);
  *(_OWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 32) = v2;
  return result;
}
