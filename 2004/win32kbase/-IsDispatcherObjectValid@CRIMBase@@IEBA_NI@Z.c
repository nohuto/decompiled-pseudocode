/*
 * XREFs of ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C004CABC
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0005F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C004C9B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C01A16D0 (-PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterI.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C006E8D0 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CRIMBase::IsDispatcherObjectValid(CRIMBase *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  return CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + 64 * v4 + 152));
}
