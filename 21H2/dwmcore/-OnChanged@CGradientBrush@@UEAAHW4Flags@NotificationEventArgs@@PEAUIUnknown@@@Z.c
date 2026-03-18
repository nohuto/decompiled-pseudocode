/*
 * XREFs of ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180036030
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStop@CGradientBrush@@AEAAXPEBUIUnknown@@@Z @ 0x1800354BC (-UpdateStop@CGradientBrush@@AEAAXPEBUIUnknown@@@Z.c)
 */

__int64 __fastcall CGradientBrush::OnChanged(
        CGradientBrush *a1,
        unsigned int a2,
        const struct IUnknown *a3,
        __int64 a4)
{
  if ( a2 == 10 && a3 )
    CGradientBrush::UpdateStop(a1, a3);
  return CBrush::OnChanged(a1, a2, a3, a4);
}
