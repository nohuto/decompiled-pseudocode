/*
 * XREFs of ?_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0009A2C
 * Callers:
 *     MonitorGetDeviceObject @ 0x1C01286E8 (MonitorGetDeviceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetDeviceObject(DXGMONITOR *this, struct _FILE_OBJECT **a2, struct _DEVICE_OBJECT **a3)
{
  void *v6; // rcx
  __int64 v8; // rax

  if ( !a2 || !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v6 = (void *)*((_QWORD *)this + 10);
  if ( !v6 )
    return 3221226021LL;
  ObfReferenceObject(v6);
  *a2 = (struct _FILE_OBJECT *)*((_QWORD *)this + 10);
  *a3 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 7);
  return 0LL;
}
