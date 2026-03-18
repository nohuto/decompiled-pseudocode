/*
 * XREFs of ?GetMonitorDescription@CMonitorPDO@OPM@@IAEJKPAG@Z @ 0x1CFD69
 * Callers:
 *     ?GetMonitorDescription@CPhysicalMonitorHandle@@QAEJKPAG@Z @ 0x1CFDA9 (-GetMonitorDescription@CPhysicalMonitorHandle@@QAEJKPAG@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __thiscall OPM::CMonitorPDO::GetMonitorDescription(
        PDEVICE_OBJECT *this,
        ULONG ResultLength,
        unsigned __int16 *PropertyBuffer)
{
  ULONG v3; // eax
  NTSTATUS result; // eax

  v3 = 2 * ResultLength;
  if ( !is_mul_ok(2u, ResultLength) )
    return -1073741675;
  ResultLength = 0;
  result = IoGetDeviceProperty(this[2], DevicePropertyDeviceDescription, v3, PropertyBuffer, &ResultLength);
  if ( result >= 0 )
    return 0;
  return result;
}
