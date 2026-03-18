/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0189000
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0194B84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     CheckAccessEx @ 0x1C00713D8 (CheckAccessEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this)
{
  __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rax

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( *((_DWORD *)this + 23) == 2 )
    v2 = *((_QWORD *)this + 10);
  else
    v2 = 0LL;
  if ( !v2 )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return CheckAccessEx(
           (int *)(*(_QWORD *)(ThreadWin32Thread + 416) + 880LL),
           (int *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 416LL) + 880LL),
           0);
}
