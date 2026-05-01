/*
 * XREFs of ?OnIdleStateFlagsChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x18023BA90
 * Callers:
 *     <none>
 * Callees:
 *     ??$UserPresenceFlags@_N_N_N_N@TaskFlowDataEngineTelemetry@@SAX$$QEA_N000@Z @ 0x18023B378 (--$UserPresenceFlags@_N_N_N_N@TaskFlowDataEngineTelemetry@@SAX$$QEA_N000@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateFlagsChanged(
        __int64 a1,
        char a2)
{
  unsigned __int8 v3[24]; // [rsp+20h] [rbp-18h] BYREF
  bool v4; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int8 v5; // [rsp+50h] [rbp+18h] BYREF
  bool v6; // [rsp+58h] [rbp+20h] BYREF

  v4 = (a2 & 8) != 0;
  v5 = a2 & 1;
  v3[0] = (a2 & 2) != 0;
  v6 = (a2 & 4) != 0;
  TaskFlowDataEngineTelemetry::UserPresenceFlags<bool,bool,bool,bool>(
    v3,
    (unsigned __int8 *)&v6,
    &v5,
    (unsigned __int8 *)&v4);
  return 0LL;
}
