/*
 * XREFs of ?IsInternalMonitor@DXGMONITOR@@UEBA_NXZ @ 0x1C020BB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsInternalMonitor(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 176) & 2) != 0;
}
