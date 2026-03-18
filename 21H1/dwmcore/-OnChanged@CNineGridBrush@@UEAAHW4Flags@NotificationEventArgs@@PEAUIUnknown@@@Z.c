/*
 * XREFs of ?OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009CC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNineGridBrush::OnChanged(__int64 a1, int a2)
{
  __int64 v3; // r9
  bool v4; // al

  if ( a2 == 14 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = 0;
    if ( v3 )
      v4 = *(_BYTE *)(v3 + 72) != 0;
    *(_BYTE *)(a1 + 72) = v4;
  }
  return CBrush::OnChanged();
}
