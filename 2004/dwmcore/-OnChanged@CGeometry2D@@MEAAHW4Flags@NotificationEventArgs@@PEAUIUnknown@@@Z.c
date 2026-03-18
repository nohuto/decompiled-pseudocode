/*
 * XREFs of ?OnChanged@CGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801B6070
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801B5E88 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2D::OnChanged(void **a1)
{
  CGeometry2D::FreeCaches(a1);
  return 1LL;
}
