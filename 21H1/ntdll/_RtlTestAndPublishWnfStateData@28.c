/*
 * XREFs of _RtlTestAndPublishWnfStateData@28 @ 0x4B33BFD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtUpdateWnfStateData@28 @ 0x4B2F4660 (_NtUpdateWnfStateData@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpWnfETWEventPublish@12 @ 0x4B33C482 (_RtlpWnfETWEventPublish@12.c)
 */

NTSTATUS __stdcall RtlTestAndPublishWnfStateData(
        int a1,
        int a2,
        PCWNF_TYPE_ID TypeId,
        void *Buffer,
        ULONG Length,
        void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp)
{
  NTSTATUS updated; // esi
  int v8; // ecx
  WNF_STATE_NAME StateName; // [esp+4h] [ebp-Ch] BYREF

  StateName.Data[0] = a1;
  StateName.Data[1] = a2;
  updated = NtUpdateWnfStateData(&StateName, Buffer, Length, TypeId, ExplicitScope, MatchingChangeStamp, 1u);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v8 = 2147353486;
  if ( *(_BYTE *)v8 && updated >= 0 )
    RtlpWnfETWEventPublish(StateName.Data[0], StateName.Data[1]);
  return updated;
}
