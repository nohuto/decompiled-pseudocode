/*
 * XREFs of ?OnViewClosing@FullScreenPositioner@@W7EAAJPEAUIApplicationView@@H@Z @ 0x1800F18F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall FullScreenPositioner::OnViewClosing(__int64 a1, struct IApplicationView *a2, int a3)
{
  return SurfaceHubPositioner::OnViewClosing((SurfaceHubPositioner *)(a1 - 8), a2, a3);
}
