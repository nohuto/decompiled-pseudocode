/*
 * XREFs of ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0043E5C
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0043B90 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01AD348 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z @ 0x1C01AD7F0 (-ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BBC90 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x1C0043F20 (-GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA-AVDoWorkAndWait@2@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall CRIMBase::SensorDoWorkAndWait(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  int result; // eax
  PVOID v6; // rbx
  PRKEVENT v7; // rdi
  PRKEVENT Event; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h]

  v2 = a2;
  if ( a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = (v2 << 6) + a1;
  if ( *(_DWORD *)(v4 + 168) != (_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  result = CRIMBase::SensorDispatcherObject::GetWorkAndWait(v4 + 152, &Event);
  v6 = Object;
  v7 = Event;
  if ( Object || Event )
  {
    KeSetEvent(Event, 1, 0);
    result = KeWaitForSingleObject(v6, WrUserRequest, 0, 0, 0LL);
    if ( v7 )
      result = ObfDereferenceObject(v7);
    if ( v6 )
      return ObfDereferenceObject(v6);
  }
  return result;
}
