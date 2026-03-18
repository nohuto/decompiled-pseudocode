/*
 * XREFs of ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x1802276DC
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A11B0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHitTestContext::GetPointInLocalSpace(
        const struct D2D_POINT_2F *this,
        const struct CMILMatrix *a2,
        struct D2D_POINT_2F *a3)
{
  return CHitTestContext::GetPointInLocalSpace(this + 11, a2, a3);
}
