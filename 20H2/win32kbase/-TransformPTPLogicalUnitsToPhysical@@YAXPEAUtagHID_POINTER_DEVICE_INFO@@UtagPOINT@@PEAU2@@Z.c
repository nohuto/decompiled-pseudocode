/*
 * XREFs of ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C0163C8C
 * Callers:
 *     RIMApplyPTPTranslation @ 0x1C0164308 (RIMApplyPTPTranslation.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C0164568 (RIMConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall TransformPTPLogicalUnitsToPhysical(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3,
        __int64 a4)
{
  LONG x; // ebx

  x = a2.x;
  if ( *((_DWORD *)a1 + 6) != 7 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgsKM)(a1, a2, a3, a4);
  if ( !(unsigned int)RIMConvertPointCoordinates(x) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
