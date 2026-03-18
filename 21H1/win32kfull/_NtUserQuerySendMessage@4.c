/*
 * XREFs of _NtUserQuerySendMessage@4 @ 0x167D47
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __QuerySendMessage@8 @ 0x1813B0 (__QuerySendMessage@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserQuerySendMessage(ULONG a1)
{
  int v1; // esi
  int SendMessage; // ebx
  void *v3; // edi
  _DWORD v5[7]; // [esp+10h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  memset(v5, 0, sizeof(v5));
  v1 = EnterSharedCrit(0, 1);
  MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_DWORD *)(v1 + 276) )
  {
    SendMessage = _QuerySendMessage(v1, v5);
    if ( SendMessage )
    {
      v3 = (void *)a1;
      if ( a1 )
      {
        ms_exc.registration.TryLevel = 0;
        v5[3] &= -(_MmUserProbeAddress >= v5[3]);
        if ( a1 >= _MmUserProbeAddress )
          v3 = (void *)_MmUserProbeAddress;
        qmemcpy(v3, v5, 0x1Cu);
        ms_exc.registration.TryLevel = -2;
      }
    }
  }
  else
  {
    SendMessage = 0;
  }
  UserSessionSwitchLeaveCrit();
  return SendMessage;
}
