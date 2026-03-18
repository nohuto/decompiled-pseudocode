/*
 * XREFs of ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C004CB00
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C004C9B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C01A16D0 (-PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterI.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C006E8D0 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall CRIMBase::GetDispatcherObjectByIndex(CRIMBase *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v6 = v4 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + v6 + 152)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  return *(void **)((char *)this + v6 + 200);
}
