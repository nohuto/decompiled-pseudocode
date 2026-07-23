/*
 * XREFs of PopDiagTracePowerTransitionEnd @ 0x140774AB8
 * Callers:
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwWriteEndScenario @ 0x140788590 (EtwWriteEndScenario.c)
 */

__int64 __fastcall PopDiagTracePowerTransitionEnd(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v4; // [rsp+48h] [rbp-20h]
  __int64 v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1;
  if ( PopDiagHandleRegistered )
  {
    v2 = MEMORY[0xFFFFF78000000014];
    v3.Ptr = (ULONGLONG)&v6;
    v4 = &v2;
    *(_QWORD *)&v3.Size = 4LL;
    v5 = 8LL;
    return EtwWriteEndScenario(PopDiagHandle, &POP_ETW_EVENT_POWERTRANSITION_END, &PopDiagActivityId, 2u, &v3);
  }
  return result;
}
