/*
 * XREFs of ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C003FF4C
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0036F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C003FE40 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C01A7430 (-PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterI.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0063920 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CRIMBase::IsDispatcherObjectValid(CRIMBase *this, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  return CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + 64 * v2 + 152));
}
