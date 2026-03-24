/*
 * XREFs of ?NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F28A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualSurface::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( a3 && a3 == *(_QWORD *)(a1 + 56) )
    a2 = 6;
  return CResource::NotifyOnChanged(a1, a2, a3);
}
