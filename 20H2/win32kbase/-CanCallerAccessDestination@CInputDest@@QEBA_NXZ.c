/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0180DC0
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018C964 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     CheckAccessEx @ 0x1C0056E08 (CheckAccessEx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((_DWORD *)this + 23) == 2 )
    v5 = *((_QWORD *)this + 10);
  else
    v5 = 0LL;
  if ( !v5 )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return CheckAccessEx(
           (int *)(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL),
           (int *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 880LL),
           0);
}
