/*
 * XREFs of HUBDSM_ReportingDeviceMissing @ 0x1C001D7D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_NotifyDeviceDisconnected @ 0x1C00162B4 (HUBPDO_NotifyDeviceDisconnected.c)
 *     HUBPDO_ReportDeviceAsMissing @ 0x1C0019BE8 (HUBPDO_ReportDeviceAsMissing.c)
 */

__int64 __fastcall HUBDSM_ReportingDeviceMissing(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 2152) )
    USBD_MarkDeviceAsDisconnected(*(_QWORD *)(a1 + 960));
  HUBPDO_NotifyDeviceDisconnected(v1);
  HUBPDO_ReportDeviceAsMissing(v1);
  return 4077LL;
}
