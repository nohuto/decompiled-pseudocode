/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowCaster@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180201A20
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180201D00 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::NotifyOnChanged(CProjectedShadowCaster *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax

  if ( !CCommonRegistryData::DisableProjectedShadows && a3 )
  {
    if ( (CProjectedShadowCaster *)a3 == a1 )
    {
      CResource::NotifyOnChanged((__int64)a1, a2, a3);
    }
    else
    {
      v3 = *((_QWORD *)a1 + 16);
      if ( v3 && a3 == v3 )
      {
        CProjectedShadowCaster::InvalidateMaskContent(a1);
      }
      else if ( *((_QWORD *)a1 + 15) )
      {
        if ( a3 == *((_QWORD *)a1 + 15) )
          CProjectedShadowCaster::RequestRedraw(a1);
      }
    }
  }
}
