/*
 * XREFs of SetConnectCompletedState @ 0x1C00B83D0
 * Callers:
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C0016610 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C00B842C (PowerConnectionEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  int v1; // eax
  PVOID v2; // rcx

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( qword_1C0250D70 )
      v1 = qword_1C0250D70();
    else
      v1 = -1073741637;
    if ( v1 >= 0 )
    {
      v2 = ReferenceDwmApiPort();
      if ( qword_1C0250D78 )
        qword_1C0250D78(v2);
    }
  }
}
