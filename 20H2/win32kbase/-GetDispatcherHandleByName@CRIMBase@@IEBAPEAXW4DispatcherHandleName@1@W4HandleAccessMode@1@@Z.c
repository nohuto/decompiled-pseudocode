/*
 * XREFs of ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C000632C
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0005760 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0005D00 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0005EE0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0005F50 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01A4250 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01A42D8 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01A4334 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01A43DC (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherHandleByName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 v7; // rax

  v4 = (unsigned int)a2;
  v5 = a3;
  if ( (unsigned int)a2 >= 0x11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = v4 << 6;
  if ( v5 )
    return *(_QWORD *)(v7 + a1 + 192);
  else
    return *(_QWORD *)(v7 + a1 + 176);
}
