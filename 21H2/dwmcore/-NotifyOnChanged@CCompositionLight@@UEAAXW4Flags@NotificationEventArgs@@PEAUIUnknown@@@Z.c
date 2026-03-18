/*
 * XREFs of ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800ECB80
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionLight::NotifyOnChanged(_BYTE *a1, unsigned int a2, __int64 a3)
{
  char v3; // si
  char v7; // al

  v3 = 0;
  if ( a2 == 11 || a2 == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 256LL))(a1);
    if ( !v7 || !a1[168] )
      v3 = 1;
    a1[168] = v7;
    if ( v3 )
      goto LABEL_5;
  }
  else if ( a2 == 5 )
  {
LABEL_5:
    CResource::NotifyOnChanged((__int64)a1, a2, a3);
  }
}
