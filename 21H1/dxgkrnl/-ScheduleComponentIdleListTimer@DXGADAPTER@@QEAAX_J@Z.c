/*
 * XREFs of ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00371BC
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0036AC8 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0037A50 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ScheduleComponentIdleListTimer(DXGADAPTER *this, __int64 a2)
{
  if ( !*((_BYTE *)this + 3213) )
  {
    *((_BYTE *)this + 3213) = 1;
    KeSetTimer((PKTIMER)this + 52, (LARGE_INTEGER)-a2, (PKDPC)this + 53);
  }
}
