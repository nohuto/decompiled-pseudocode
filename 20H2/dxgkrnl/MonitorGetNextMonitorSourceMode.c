/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C01379E0
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C0137668 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C013784C (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  _QWORD *v9; // rdx
  _QWORD **v10; // rcx
  _QWORD *v11; // rax
  _QWORD **v12; // r8
  _QWORD *v13; // rax
  bool v14; // zf
  _QWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rax

  if ( a1 && a3 && a4 )
  {
    v8 = 0;
    *a3 = 0LL;
    *a4 = 0;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 296), 1u);
    v10 = (_QWORD **)(a1 + 216);
    if ( a2 )
    {
      v11 = *v10;
      if ( *v10 == v10 )
      {
LABEL_20:
        v18 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v18 + 24) = a2;
        *(_QWORD *)(v18 + 32) = a1;
        WdLogEvent5_WdError(v18);
        v17 = -1071774928;
        goto LABEL_19;
      }
      v9 = (_QWORD *)(a2 + 96);
      if ( v11 != (_QWORD *)(a2 + 96) )
      {
        while ( v10 != v11 )
        {
          v11 = (_QWORD *)*v11;
          if ( v11 == v9 )
            goto LABEL_9;
        }
        goto LABEL_20;
      }
LABEL_9:
      v12 = (_QWORD **)*v9;
      if ( (_QWORD **)*v9 != v10 )
      {
        v13 = v12 - 12;
        v14 = v12 == 0LL;
        goto LABEL_11;
      }
    }
    else
    {
      v16 = *v10;
      if ( *v10 != v10 )
      {
        v13 = v16 - 12;
        v14 = v16 == 0LL;
LABEL_11:
        if ( v14 )
          v13 = 0LL;
        if ( v13 )
        {
          *a3 = v13;
          *a4 = *((_DWORD *)v13 + 28);
LABEL_15:
          ExReleaseResourceLite((PERESOURCE)(a1 + 296));
          KeLeaveCriticalRegion();
          return v8;
        }
      }
    }
    v17 = 1075708748;
LABEL_19:
    v8 = v17;
    goto LABEL_15;
  }
  return 3221225485LL;
}
