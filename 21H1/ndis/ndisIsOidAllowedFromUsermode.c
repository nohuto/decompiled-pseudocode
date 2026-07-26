/*
 * XREFs of ndisIsOidAllowedFromUsermode @ 0x1C003E360
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010E40 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisIsOidAllowedFromUsermode_0 @ 0x1C003E38C (ndisIsOidAllowedFromUsermode_0.c)
 *     ?ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z @ 0x1C006BA38 (-ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsOidAllowedFromUsermode(int a1)
{
  _DWORD *v1; // rax

  v1 = &unk_1C00CC450;
  while ( *v1 != a1 )
  {
    if ( ++v1 == (_DWORD *)&unk_1C00CC454 )
      return 1;
  }
  return 0;
}
