/*
 * XREFs of ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C016C53C
 * Callers:
 *     RIMApplyPTPTranslation @ 0x1C016CBB8 (RIMApplyPTPTranslation.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C016CE18 (RIMConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall TransformPTPLogicalUnitsToPhysical(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  LONG x; // ebx

  x = a2.x;
  if ( *((_DWORD *)a1 + 6) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !(unsigned int)RIMConvertPointCoordinates(x) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
