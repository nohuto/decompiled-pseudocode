/*
 * XREFs of ?OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801B47F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x1801B3F98 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2DGroup::OnChanged(__int64 a1)
{
  *(_DWORD *)(a1 + 152) |= 0xFu;
  CGeometry2D::FreeCaches((void **)a1);
  return 1LL;
}
