/*
 * XREFs of SetConnectCompletedState @ 0x1C0061430
 * Callers:
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x1C006148C (PowerConnectionEvent.c)
 *     ReferenceDwmApiPort @ 0x1C00BA7E0 (ReferenceDwmApiPort.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  int v1; // eax
  __int64 v2; // rcx

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( qword_1C0252D70 )
      v1 = qword_1C0252D70();
    else
      v1 = -1073741637;
    if ( v1 >= 0 )
    {
      v2 = ReferenceDwmApiPort();
      if ( qword_1C0252D78 )
        qword_1C0252D78(v2);
    }
  }
}
