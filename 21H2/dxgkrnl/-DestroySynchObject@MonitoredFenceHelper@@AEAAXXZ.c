/*
 * XREFs of ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1C02BC63C
 * Callers:
 *     ??1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C004E090 (--1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1C02BD188 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000219C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall MonitoredFenceHelper::DestroySynchObject(MonitoredFenceHelper *this)
{
  DXGDEVICESYNCOBJECT *v2; // rcx

  v2 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
