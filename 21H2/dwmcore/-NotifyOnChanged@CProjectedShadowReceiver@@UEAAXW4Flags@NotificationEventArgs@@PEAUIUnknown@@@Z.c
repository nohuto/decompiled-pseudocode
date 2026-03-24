/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001FB00
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800375A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::NotifyOnChanged(
        CProjectedShadowReceiver *a1,
        __int64 a2,
        CProjectedShadowReceiver *a3)
{
  if ( !CCommonRegistryData::DisableProjectedShadows && a3 )
  {
    if ( a3 == a1 )
    {
      CResource::NotifyOnChanged(a1, a2, a3);
    }
    else if ( *((_QWORD *)a1 + 12) )
    {
      if ( a3 == *((CProjectedShadowReceiver **)a1 + 12) )
        CProjectedShadowReceiver::InvalidateMaskContent(a1);
    }
  }
}
