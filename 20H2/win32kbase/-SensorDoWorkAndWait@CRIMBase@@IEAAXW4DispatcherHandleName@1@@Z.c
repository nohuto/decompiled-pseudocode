/*
 * XREFs of ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0023C90
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0024570 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01A5268 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z @ 0x1C01A5710 (-ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3BC0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x1C0023D54 (-GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA-AVDoWorkAndWait@2@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall CRIMBase::SensorDoWorkAndWait(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  int result; // eax
  PVOID v8; // rbx
  PRKEVENT v9; // rdi
  PRKEVENT Event; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h]

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = (v4 << 6) + a1;
  if ( *(_DWORD *)(v6 + 168) != (_DWORD)v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  result = CRIMBase::SensorDispatcherObject::GetWorkAndWait(v6 + 152, &Event);
  v8 = Object;
  v9 = Event;
  if ( Object || Event )
  {
    KeSetEvent(Event, 1, 0);
    result = KeWaitForSingleObject(v8, WrUserRequest, 0, 0, 0LL);
    if ( v9 )
      result = ObfDereferenceObject(v9);
    if ( v8 )
      return ObfDereferenceObject(v8);
  }
  return result;
}
