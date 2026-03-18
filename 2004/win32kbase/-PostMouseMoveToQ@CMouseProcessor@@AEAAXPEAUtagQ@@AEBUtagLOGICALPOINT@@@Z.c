/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C006CA34
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C006C95C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C006CB60 (ApiSetEditionPostMouseMoveToQ.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C006CC54 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3,
        __int64 a4)
{
  _DWORD *v7; // rdi
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // rbx

  if ( (*((_DWORD *)a2 + 97) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v7 = (_DWORD *)((char *)this + 3528);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor *)((char *)this + 3528));
  v9 = (int)qword_1C0251F00;
  if ( qword_1C0251F00 )
    v9 = qword_1C0251F00(*((_QWORD *)a2 + 11));
  if ( !v9 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 416LL) + 832LL) + 100LL) & 2) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v8,
        6,
        51,
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
    ApiSetEditionPostMouseMoveToQ(
      (_DWORD)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      *v7,
      *((_QWORD *)this + 442),
      *((_QWORD *)this + 431),
      (__int64)a2 + 420);
  }
  *((_DWORD *)a2 + 97) &= ~0x20u;
  v10 = (_DWORD *)((char *)a2 + 420);
  if ( v10 )
  {
    *v10 = 0;
    v10[1] = 0;
  }
  *(_QWORD *)v7 = 0LL;
  *((_QWORD *)this + 442) = 0LL;
  *((_QWORD *)this + 443) = 0LL;
}
