/*
 * XREFs of _RtlSetThreadSubProcessTag@4 @ 0x4B2DF1C0
 * Callers:
 *     _TppCallbackCheckThreadAfterCallback@4 @ 0x4B2B638B (_TppCallbackCheckThreadAfterCallback@4.c)
 *     _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7 (_TppCleanupGroupMemberCallbackProlog@8.c)
 *     _RtlpWnfWalkUserSubscriptionList@12 @ 0x4B2DEE18 (_RtlpWnfWalkUserSubscriptionList@12.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _RtlpTpIoCallback@16 @ 0x4B385720 (_RtlpTpIoCallback@16.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

void *__stdcall RtlSetThreadSubProcessTag(void *a1)
{
  struct _TEB *v1; // eax
  void *SubProcessTag; // edi
  int v3; // esi
  int v4; // eax
  char v6[6]; // [esp+10h] [ebp-34h] BYREF
  __int16 v7; // [esp+16h] [ebp-2Eh]
  void *v8; // [esp+30h] [ebp-14h]
  void *v9; // [esp+34h] [ebp-10h]

  v1 = NtCurrentTeb();
  SubProcessTag = v1->SubProcessTag;
  v1->SubProcessTag = a1;
  v3 = 2147353488;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 566;
  else
    v4 = 2147353488;
  if ( *(_BYTE *)v4 && a1 != SubProcessTag )
  {
    v8 = SubProcessTag;
    v7 = 1349;
    v9 = a1;
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (int)NtCurrentPeb()->SharedData + 566;
    NtTraceEvent(*(unsigned __int8 *)v3, 1026, 8, v6);
  }
  return SubProcessTag;
}
