/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C01D0DAC
 * Callers:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C01D0A50 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlFillPreferredMonitorMode @ 0x1C01D0BD0 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD **v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD **v12; // rdx
  _QWORD **v13; // rax

  v4 = 0;
  if ( a1 && a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 24), 1u);
    v9 = (_QWORD **)(*(_QWORD *)(a1 + 232) + 128LL);
    if ( a2 )
    {
      v10 = *v9;
      if ( *v9 == v9 )
      {
LABEL_19:
        WdLogSingleEntry1(2LL, a2);
        v4 = -1071774928;
LABEL_16:
        ExReleaseResourceLite((PERESOURCE)(a1 + 24));
        KeLeaveCriticalRegion();
        return v4;
      }
      v11 = (_QWORD *)(a2 + 96);
      while ( v10 != v11 )
      {
        if ( v9 == v10 )
          goto LABEL_19;
        v10 = (_QWORD *)*v10;
      }
      v12 = (_QWORD **)*v11;
    }
    else
    {
      v12 = (_QWORD **)*v9;
    }
    if ( v12 == v9 )
      goto LABEL_18;
    v13 = v12 - 12;
    if ( !v12 )
      v13 = 0LL;
    if ( !v13 )
    {
LABEL_18:
      v4 = 1075708748;
    }
    else
    {
      *a3 = v13;
      *a4 = *((_DWORD *)v13 + 28);
    }
    goto LABEL_16;
  }
  return 3221225485LL;
}
