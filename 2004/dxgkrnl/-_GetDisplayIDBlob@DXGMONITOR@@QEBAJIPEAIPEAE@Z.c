/*
 * XREFs of ?_GetDisplayIDBlob@DXGMONITOR@@QEBAJIPEAIPEAE@Z @ 0x1C0161AB4
 * Callers:
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C00097C4 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01619FC (MonitorGetDisplayIDFromMonitor.c)
 * Callees:
 *     memmove @ 0x1C0027200 (memmove.c)
 */

__int64 __fastcall DXGMONITOR::_GetDisplayIDBlob(
        DXGMONITOR *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int v5; // eax

  if ( *((_QWORD *)this + 20) )
  {
    *a3 = *((_DWORD *)this + 38);
    if ( a4 && a2 && (v5 = *((_DWORD *)this + 38), a2 >= v5) )
    {
      memmove(a4, *((const void **)this + 20), v5);
      return 0LL;
    }
    else
    {
      return 3221225507LL;
    }
  }
  else
  {
    *a3 = 0;
    return 3223126017LL;
  }
}
