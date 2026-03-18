/*
 * XREFs of ?OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800360B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMaskBrush::OnChanged(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v6; // al
  __int64 v7; // rdx

  if ( a2 == 14 )
  {
    a4 = *(_QWORD *)(a1 + 96);
    v6 = 0;
    if ( a4 )
    {
      if ( *(_BYTE *)(a4 + 80) || (v7 = *(_QWORD *)(a1 + 88)) != 0 && *(_BYTE *)(v7 + 80) )
        v6 = 1;
    }
    *(_BYTE *)(a1 + 80) = v6;
  }
  return CBrush::OnChanged(a1, a2, a3, a4);
}
