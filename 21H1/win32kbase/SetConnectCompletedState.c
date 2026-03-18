/*
 * XREFs of SetConnectCompletedState @ 0x1C0057490
 * Callers:
 *     xxxRemoteConnect @ 0x1C0054D30 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x1C005966C (PowerConnectionEvent.c)
 *     ReferenceDwmApiPort @ 0x1C00ADB00 (ReferenceDwmApiPort.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  int v1; // eax
  __int64 v2; // rcx

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( qword_1C0258D30 )
      v1 = qword_1C0258D30();
    else
      v1 = -1073741637;
    if ( v1 >= 0 )
    {
      v2 = ReferenceDwmApiPort();
      if ( qword_1C0258D38 )
        qword_1C0258D38(v2);
    }
  }
}
