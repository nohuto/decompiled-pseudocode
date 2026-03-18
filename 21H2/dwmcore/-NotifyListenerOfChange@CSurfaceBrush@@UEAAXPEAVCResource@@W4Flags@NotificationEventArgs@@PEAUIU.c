/*
 * XREFs of ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9

  v5 = a1;
  if ( (_DWORD)a3 != 1 )
    v5 = a4;
  return CBrush::NotifyListenerOfChange(a1, a2, a3, v5);
}
