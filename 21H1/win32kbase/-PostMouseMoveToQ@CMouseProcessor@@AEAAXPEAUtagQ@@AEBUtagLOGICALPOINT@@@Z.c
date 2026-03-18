/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0062E68
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0062B4C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C0062C24 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C0062D74 (ApiSetEditionPostMouseMoveToQ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3)
{
  unsigned int *v6; // rdi
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // rbx

  if ( (*((_DWORD *)a2 + 97) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v6 = (unsigned int *)((char *)this + 3600);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor *)((char *)this + 3600));
  v8 = (int)qword_1C0257EC0;
  if ( qword_1C0257EC0 )
    v8 = qword_1C0257EC0(*((_QWORD *)a2 + 11));
  if ( !v8 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 416LL) + 832LL) + 100LL) & 2) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        6,
        51,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
    ApiSetEditionPostMouseMoveToQ(
      (__int64)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      *v6,
      *((_QWORD *)this + 451),
      *((_QWORD *)this + 440),
      (__int64)a2 + 420);
  }
  *((_DWORD *)a2 + 97) &= ~0x20u;
  v9 = (_DWORD *)((char *)a2 + 420);
  if ( v9 )
  {
    *v9 = 0;
    v9[1] = 0;
  }
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)this + 451) = 0LL;
  *((_QWORD *)this + 452) = 0LL;
}
