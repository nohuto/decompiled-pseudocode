/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180235930
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235858 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowReceiver::NotifyOnChanged(CProjectedShadowReceiver *a1, unsigned int a2, __int64 a3)
{
  if ( !CCommonRegistryData::DisableProjectedShadows && a3 )
  {
    if ( (CProjectedShadowReceiver *)a3 == a1 )
    {
      CResource::NotifyOnChanged((__int64)a1, a2, a3);
    }
    else if ( *((_QWORD *)a1 + 13) )
    {
      if ( a3 == *((_QWORD *)a1 + 13) )
        CProjectedShadowReceiver::InvalidateMaskContent(a1);
    }
  }
}
